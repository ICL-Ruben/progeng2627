#include <iostream>

int main(){
    //a = q * b + r
    int a, b, q = 0, r;
    std::cout << "Choose a number to be divided:" << std::endl;
    std::cin >> a;
    std::cout << "Now choose a number to divide " << a << " by:" << std::endl;
    std::cin >> b;
    r = a;
    while (r >= b){
        r -= b;
        q++;
    }    
    std::cout << a << " divided by " << b << " equals " << q << " remainder " << r;
}