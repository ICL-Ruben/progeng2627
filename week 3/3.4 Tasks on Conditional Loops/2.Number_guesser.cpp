#include <iostream>
#include <random>

int main() {
    int rand_int, n;
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dist(1,100);
    
    rand_int = dist(gen);

    std::cout << "Guess my number" << std::endl;
    std::cin >> n;

    while(n != rand_int && n != 0){
        if(n > rand_int){
            std::cout << "Lower" << std::endl << "Try to guess my number again" << std::endl;
        }
        else if(n < rand_int){
            std::cout << "Higher" << std::endl << "Try to guess my number again" << std::endl;
        }
        std::cin >> n;
    }
    if(n == rand_int){
        std::cout << "Niiiiiiice, you guessed it" << std::endl;
    }
    else if(n == 0){
        std::cout << "See ya" << std::endl;
    }
}