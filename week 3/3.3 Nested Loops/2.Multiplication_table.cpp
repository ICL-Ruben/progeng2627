#include <iostream>

int main (){
    int dimension;

    std::cout << "Enter a dimension for the multiplication table" << std::endl;
    std::cin >> dimension;

    for(int i=1; i<=dimension; i++){
        for(int j=1; j<=dimension; j++){
            std::cout << i*j << '\t';
        }
        std::cout << std::endl;
    }
}