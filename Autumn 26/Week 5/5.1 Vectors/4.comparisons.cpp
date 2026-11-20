#include <iostream>
#include <vector>

int main(){
    int n, t, temp;
    std::vector<int> vector;

    std::cout << "Enter an amount of numbers you want to type" << std::endl;
    std::cin >> n;
    std::cout << "Now type in the numbers one by one";

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        vector.push_back(temp);
    }

    std::cout << "Type in a number, the programme will output your numbers that are larger" << std::endl;
    std::cin >> t;

    for(int i = 0; i < n; i++){
        if(vector[i] > t){
            std::cout << vector[i] << std::endl;
        }
    }
    
}