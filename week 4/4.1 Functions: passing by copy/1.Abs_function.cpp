#include <iostream>

double myabs(double x){
    double abs;

    if(x < 0){
        abs = -x;
    }
    else{
        abs = x;
    }

    return abs;
}

int main(){
    double n; 
      
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}