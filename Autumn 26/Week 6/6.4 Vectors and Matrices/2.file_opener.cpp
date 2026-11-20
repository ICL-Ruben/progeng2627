#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]){
    std::ifstream textfile;
    if (argc == 2){
        textfile.open(argv[1]);
    }
    else {
        std::cout << "Wrong input";
    }

    if (textfile.is_open() == false){
        std::cout << "Error: could not open file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<std::string> output;

    while ( textfile >> tmp){
        output.push_back(tmp);
    }
    for( int i = 0; i < output.size(); i++){
        std::cout << output[i] << std::endl; 
    }    
}