#include <iostream>

int main(){
    int n, sum = 0;
    do {
        std::cout << "enter a number" << std::endl;
        std::cin >> n;
        sum = sum + n;
        std::cout << "the sum so far is: " << sum << std::endl;
    } while (n != 0);
    
    std::cout << "the sum has been terminated" << std::endl;
}