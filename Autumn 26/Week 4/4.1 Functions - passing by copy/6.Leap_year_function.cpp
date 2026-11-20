#include <iostream>


bool leap_year(int year){
    bool ly;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }  
        else{
            ly = true;
        } 
    }
    else{
        ly = false;
    }

    return ly;
}

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    std::cout << (leap_year(1600) == true) << std::endl; //test cases are all 1
    std::cout << (leap_year(2800) == true) << std::endl;
    std::cout << (leap_year(4) == true) << std::endl;
    std::cout << (leap_year(0) == true) << std::endl;

    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(100) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}