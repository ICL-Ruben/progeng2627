#include <iostream>

int main(){
    int year, remainder;

    std::cout << "Enter a year" << std::endl;
    std::cin >> year;

    remainder = year % 4;

    if (remainder == 0){
        std::cout << year << " is a gap year" << std::endl;
    }

    else {
        std::cout << year << " is not a gap year" << std::endl;
    }
}
