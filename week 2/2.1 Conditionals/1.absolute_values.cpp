#include <iostream>

int main(){
    double n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;

    if (n < 0) {
        n = -n;
    }

    std::cout << "The absolute value of " << n << " is " << n << std::endl;
}