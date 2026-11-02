#include <iostream>
#include <vector>

int main(){
    int n, s, temp, counter = 0;
    std::vector<int> vector;
    std::vector<int> occurence_index; //will store the index of the repeat vector

    std::cout << "Enter an amount of numbers you want to type" << std::endl;
    std::cin >> n;
    std::cout << "Now type in the numbers one by one" << std::endl;

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        vector.push_back(temp);
    }

    std::cout << "Now type in a number and see how many repeat occurences it has" << std::endl;
    std::cin >> s;

    for(int i = 0; i < n; i++){
        if(vector[i] == s){
            counter ++;
            occurence_index.push_back(i); //saving the index of the vector that is equal to s
        }
    }

    std::cout << "There are " << counter << " occurences of " << s << " at indices:" << std::endl;
    for(int i = 0; i < occurence_index.size(); i++){
        std::cout << occurence_index[i] << std::endl;
    }
}