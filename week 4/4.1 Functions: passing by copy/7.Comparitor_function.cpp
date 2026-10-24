#include <iostream>

double max(double x,double y, double z){
    if(x > y){
        if(x > z){
            return x;
        }
        else{
            return z;
        }
    }
    else if(y > z){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    double a, b, c;

    std::cout << "Type in 3 numbers" << std::endl;
    std::cin >> a >> b >> c;
    std::cout << max(a,b,c) << " is the larger number";
    
    std::cout << max(1,2,3) << max(1,3,2) << max(3,2,1) << max(3,1,2) << max(1,1,1) << max(1,2,2) << max(2,2,1);
}