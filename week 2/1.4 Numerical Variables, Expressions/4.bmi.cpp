#include <iostream>

int main(){
    float weight, height, BMI;
    std::cout << "This is a BMI calculator. Enter your height in metres" << std::endl;
    std::cin >> height;
    
    std::cout << "Enter your weight in kilograms" << std::endl;
    std::cin >> weight;

    BMI = weight / (height * height);
    
    std::cout << "Your BMI is " << BMI << std::endl;
}