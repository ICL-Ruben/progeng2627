#include <iostream>

bool rectangle(double l, double w, double& P, double& A){
    A = l*w;
    P = 2*l + 2*w;
    if(A > 0 && P > 0){
        return 1;
    } 
    else{
        return 0;
    }
}

int main(){
    double length, width, perimeter, area;

    std::cout << "Enter a length and width for a rectangle" << std::endl;
    std::cin >> length >> width;

    if(rectangle(length, width, perimeter, area)){
        std::cout << "Perimeter: " << perimeter << std::endl;
        std::cout << "Area: " << area;
    }
    else{
        std::cout << "Not a correct input" << std::endl;
    }
}