#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::string infile_name;
    std::cout << "Enter name of input file" << std::endl;
    std::cin >> infile_name;

    std::ifstream infile; 
    infile.open(infile_name);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close();

    std::ofstream outfile;
    outfile.open("1.output.txt");

    if(!outfile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = v.size() - 1; i >= 0; i-- ){
        outfile << v[i] << std::endl;
    }

    outfile.close();
    //verified the output.txt file by clicking on it. Does produce the desired outcome
}