#include <iostream>

double mypow(double base, int exp){
    double result = 1; 

    for(int i = exp; i > 0; i--){
        result = result*base;
    }
    for(int i = exp; i < 0; i++){
        result *= base;
    }
    if(exp < 0){
        result = 1/result;
    }

    return result;
}

int main(){

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-2:" << mypow(2, -2) << std::endl; 
}