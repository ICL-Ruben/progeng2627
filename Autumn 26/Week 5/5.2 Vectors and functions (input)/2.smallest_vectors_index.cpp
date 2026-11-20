#include <iostream>
#include <vector>

//in the function i will assume if the smallest value is repeat, function should output the index of the first instance of the number
int min_vector_element(const std::vector<double>& vin){ //we are passing the vector by const reference, indicated by 'const'and the &
    double smallest_value;
    int smallest_index = 0;

    if(vin.size() == 0){
        return -1;
    }
    smallest_value = vin[0];

    for(int i = 0; i < vin.size(); i++){
        if(smallest_value > vin[i]){
            smallest_index = i;
        }
    }
    return smallest_index;
}

int main(){    
    std::cout << min_vector_element(std::vector<double>{0,1,-1,0}) << std::endl;
    std::cout << min_vector_element(std::vector<double>{}) << std::endl;
    std::cout << min_vector_element(std::vector<double>{-1}) << std::endl;
    std::cout << min_vector_element(std::vector<double>{0.343,-5.024}) << std::endl;
    std::cout << min_vector_element(std::vector<double>{0,0,0,0}) << std::endl;
}
// should output: 2, -1, 0, 1, 0