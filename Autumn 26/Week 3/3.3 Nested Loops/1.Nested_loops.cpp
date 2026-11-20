#include <iostream>

int main() {
    int row,column;

    std::cout << "Type row size" << std::endl;
    std::cin >> row;

    std::cout << "Now Type column size" << std::endl;
    std::cin >> column;

    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}