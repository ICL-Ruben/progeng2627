#include <iostream>

int main() {

    int n,i, result=1;

    std::cout << "Type a number into factorial function" << std::endl;
    std::cin >> n;
    
    for (i=1; i<=n; i++){
        result = result*i;
    }
    std::cout << result << std::endl;
}