#include <iostream>

int main(){
    int n, remainder;

    std::cout << "Type a number" << std::endl;
    std::cin >> n;

    remainder = n % 2;

    if (remainder == 0){
        std::cout << "The number is even";
    }

    else{
        std::cout << "The number is odd";
    }
}