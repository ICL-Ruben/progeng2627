#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if(n % cf == 0){
            return cf;
        }
    }
    if(n > 1){
        return 0;
    }
    return -1;
}

int main(){
    int l_bound, h_bound;

    std::cout << "Type in two numbers, smaller one first, should be greater than 1" << std::endl;
    std::cin >> l_bound >> h_bound;

    //failing conditionals
    if(smallest_factor(l_bound) == -1 || smallest_factor(h_bound) == -1){
        std::cout << "Invalid Inputs";
        return 0;
    }
    if(l_bound > h_bound){
        std::cout << "your supposed to type the smaller one first" << std::endl;
        return 0;
    }

    for(; l_bound <= h_bound; l_bound++){
        if(smallest_factor(l_bound) == 0){
            std::cout << l_bound << std::endl;
        }
    }
    return 0;
}