#include <iostream>

int main(){
    float n, counter = 0, total = 0;
    do {
        std::cout << "enter a number" << std::endl;
        std::cin >> n;
        total += n;
        counter++;
        std::cout << "the average so far is: " << total/counter << std::endl;
    } while (n != 0);
    
    std::cout << "the average has been terminated" << std::endl;
}