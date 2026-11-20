#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

std::vector<double> line_to_vector (std::string s){
    std::stringstream ss;
    std::string temp;
    std::vector<double> out;

    ss << s;
    while(ss >> temp){
        out.push_back(std::stod(temp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    // std::getline reads a whole line as a string
    // by default the separator is the newline
    // rather than any whitespace
    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

//validate the input matrices to show they are the same format

bool mult_dimension_validation(const std::vector<std::vector<double>>& m1,const std::vector<std::vector<double>>& m2){
    int row_m1, col_m1, row_m2, col_m2;

    row_m1 = m1.size();
    row_m2 = m2.size();

    col_m1 = m1[0].size();
    col_m2 = m2[0].size();

    if(col_m1 != row_m2){
        std::cout << "Invalid matrix dimensions" << std::endl;
        return false;
    }

    for(int i = 0; i < m1.size(); i++){
        if (m1[i].size() != col_m1){
            std::cout << "Matrix is not formatted correctly" << std::endl;
            return false;
        }
    }
        for(int i = 0; i < m2.size(); i++){
        if (m2[i].size() != col_m2){
            std::cout << "Matrix is not formatted correctly" << std::endl;
            return false;
        }
    }
    return true;

}

//scalar product, no longer need to validate if v1 and v2 are equal as this is done by the mult_dimension_validate
double scalar_product(const std::vector<double>& v1, const std::vector<double>& v2){
    double out = 0;
    for(int i = 0; i < v1.size(); i++){
        out += v1[i]*v2[i];
    }
    return out;
}

//extract a certain column
std::vector<double> column_extraction(const std::vector<std::vector<double>>& matrix, int col_select){
    std::vector<double> output_vector;

    for(int i = 0; i < matrix.size(); i++){
        output_vector.push_back(matrix[i][col_select]);
    }

    return output_vector;
}

//multiply the two matrices

bool matrix_mult(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2, std::vector<std::vector<double>>& mult_result){
    if(mult_dimension_validation(m1,m2) == false){
        return false;
    }
    double temp;
    for(int i = 0; i < m1.size(); i++){ // row from m1
        std::vector<double> row;
        for(int j = 0; j < m2[0].size(); j++){ // col from m2
            temp = scalar_product(m1[i],column_extraction(m2, j));
            row.push_back(temp);
        }
        mult_result.push_back(row);
    }
    return true;
}

std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    // getting the std::string representation 
    // of this std::stringstream object
    return out.str();
}

int main(int argc, char* argv[]){
    std::vector<std::vector<double>> m1, m2, m3;

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    m1 = read_matrix_from_file(argv[1]);
    m2 = read_matrix_from_file(argv[2]);

    if(matrix_mult(m1, m2, m3) == false){
        return 0;
    }

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "x" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}
