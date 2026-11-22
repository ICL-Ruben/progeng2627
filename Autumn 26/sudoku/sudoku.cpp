#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int twod_to_oned(int row, int col, int rowlen){  //returns the index of an element when specifying it's row, column
    return row*rowlen+col;
}

int mfind(int n, const std::vector<int>& v){ //looks for an element that has the same value as n, outputs the index of the element. if no such element is found, returns -1
    for (int i = 0; i < v.size(); i++){
        if (v[i] == n){
            return i;
        }
    }
    return -1;
}

bool check_sequence(const std::vector<int>& v){ //checks if a range of numbers are found in a sequence (this will be used to check if 1 to n is found in a row/column/subsquare)
    for (int i = 1; i <= v.size(); i++){
        if(mfind(i,v) == -1){
            return false;
        }
    }
    return true;
}

void get_row(int r, const std::vector<int>& in, std::vector<int>& out){ //outputs a specified row
    int row_len = std::sqrt(in.size());
    for (int col = 0; col < row_len; col++){
        out.push_back(in[twod_to_oned(r,col,row_len)]);
    }
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){ //outputs a specified column
    int col_len = std::sqrt(in.size());
    for (int row = 0; row < col_len; row++){
        out.push_back(in[twod_to_oned(row,c,col_len)]);
    }
}

void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){ //outputs a specified subsquare
    int value;
    int side_len = std::sqrt(in.size());
    int subs_len = std::sqrt(side_len);
    int col_index = subs_len * (subs % subs_len);  //the column index of the first subsquare element
    int row_index = subs_len * (subs / subs_len); //the row index of the first subsquare element

    for (int i = 0; i < subs_len; i++){
        for (int j = 0; j < subs_len; j++){
            value = in[twod_to_oned(row_index + i, col_index + j, side_len)];
            out.push_back(value);
        }
    }

}

bool valid_sudoku(const std::vector<int>& g){ //checks each row/column/subsquare has a valid 1 - n 
    int side = std::sqrt(g.size()); 
    std::vector<int> seq;

    // for each row...
    for(int i = 0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    // for each column...
    for(int i = 0; i < side; i++){
        seq.clear();
        get_col(i,g,seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

    // for each subsquare...
   for(int i = 0; i < side; i++){
        seq.clear();
        get_subsq(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }

    }

    return true;
}

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> s;

    // beginning of block of code reading the sudoku from the text file

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        s.push_back(tmp);
    }
    // end of block of code reading the sudoku from the text file
    // we now have the content of the sudoku in vector s

    int side = std::sqrt(s.size());
    // assuming it is a valid square grid in terms of size
    // (if it isn't, the program will not work properly, which is expected)

    // printing the content of the sudoku (as a square);
    // the sudoku is stored as a one-dimensional vector
    // but the vector can be indexed using two indices
    // by converting the indices of a two dimensional representation
    // into the corresponding one-dimensional index (using our function twod_to_oned)

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    // calling the function checking if the sudoku is a valid one:

    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << "valid" << std::endl;
    }
    else{
        std::cout << "not valid" << std::endl; 
    }
}