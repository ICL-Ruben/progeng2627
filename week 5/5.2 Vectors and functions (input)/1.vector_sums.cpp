#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n, temp;
    std::vector<double> v;

    std::cout << "How many vector indexes do you want to add?" << std::endl;
    std::cin >> n;
    std::cout << "type in the vectors one by one" << std::endl;

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}