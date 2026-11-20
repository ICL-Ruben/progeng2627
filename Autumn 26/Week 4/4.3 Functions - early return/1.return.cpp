#include <iostream>

int f(){
    std::cout << "this is function f" << std::endl;
    return 2;
    std::cout << "printing after the first return statement" << std::endl;
    return 3;
    std::cout << "printing after the second return statement" << std::endl;
}

int main(){
    int n = 0;
    n = f(); //function will be equal to whatever it first returns
    std::cout << "n is: " << n << std::endl; 
}