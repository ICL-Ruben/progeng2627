#include <iostream>
#include <vector>
//This function should check if the vector contains an element with value n and return the index of (the first occurrence of) the element if it is found 
//(remember that you can use an early return in this case) and -1 if not.

//(There is already a function in the standard library performing this task but don't use it for this exercise because it would defeat the purpose.)

//Before you even start implementing the function, write the test cases in the main.

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