#include <iostream>

int myfactorial(int in){
    int fact = 1;
    
    for(int i = in; i > 0; i--){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "The factorial of " << n << " is:" << myfactorial(n) << std::endl;
}