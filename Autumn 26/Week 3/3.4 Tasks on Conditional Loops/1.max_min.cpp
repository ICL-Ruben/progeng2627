#include <iostream>

int main(){
    int n, max, min;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    max = n;
    min = n;

    std::cout << "the maximum so far is: " << max << std::endl;
    std::cout << "the minimum so far is: " << min << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n > max){
            max = n;
        }
        
        else if(n < min){
            min = n;
        }

        std::cout << "maximum so far: " << max << std::endl;
        std::cout << "minimum so far: " << min << std::endl;
    }

}