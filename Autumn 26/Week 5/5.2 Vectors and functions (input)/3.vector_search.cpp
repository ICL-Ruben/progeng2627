#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(n == vin[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    std::cout << search_vector(3, std::vector<int>{1,3,3,0}) << std::endl;
    std::cout << search_vector(0, std::vector<int>{}) << std::endl;
    std::cout << search_vector(0, std::vector<int>{0}) << std::endl;
    std::cout << search_vector(1, std::vector<int>{0,1}) << std::endl;
    std::cout << search_vector(-2, std::vector<int>{0,0,0,0,-2}) << std::endl;
    //outputs: 1, -1, 0, 1, 4
}