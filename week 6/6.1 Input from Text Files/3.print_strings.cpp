#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <string>

int main(){
    std::ifstream infile;
    infile.open("string_input.txt");

    std::vector<std::string> v;

    if(infile.is_open() == false){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    for(int i = v.size() - 1; i >= 0; i--){
        std::cout << v[i] << std::endl;
    }
    
}