#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if(n % cf == 0){
            return cf;
        }
    }
    if(n > 1){
        return 0;
    }
    return -1;
}

int main(){
    int n;
    std::cout << "Type a number greater than 1" << std::endl;
    std::cin >> n;
    int result = smallest_factor(n);
    if(result > 0){
        std::cout << "The smallest factor of " << n << " is " << result;
    }
    else if(result == 0){
        std::cout << n << " is a prime";
    }
    else if(result == -1){
        std::cout << "Invalid input";
    }
}