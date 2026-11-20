#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector;

    vector.push_back(2);
    vector.push_back(5);
    vector.push_back(6);
    //the vector now has the values [2, 5, 6] stored
    std::cout << vector[0] * (vector[1] + vector[2]) << std::endl;
}