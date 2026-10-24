#include <iostream>
#include <cmath>

int main(){
    double n, x, sum = 0;

    std::cout << "Type in a base and a starting exponential which will be summed with decreasing powers" << std::endl;
    std::cin >> x >> n;

    for(int i=n; i>0; i--){
        sum = sum + std::pow(x, i);
    }

    std::cout << "The sum of powers of " << x << " starting from " << n << " is " << sum << std::endl;
}