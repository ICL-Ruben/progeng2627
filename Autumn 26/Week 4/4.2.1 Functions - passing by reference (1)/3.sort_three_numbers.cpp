#include <iostream>

void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s2 > s3){
        myswap(s2,s3);
    }
    if(s1 > s2){
        myswap(s1,s2);
    }
    if(s2 > s3){
        myswap(s2,s3);
    }
}

void print_sorted(double a, double b, double c){
    sort_three_numbers(a,b,c);
    std::cout << a << " " << b << " " << c << " | ";
}

int main(){
    double n1, n2, n3;

    std::cout << "Please enter three numbers" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    sort_three_numbers(n1,n2,n3);

    std::cout << n1 << " " << n2 << " " << n3 <<std::endl;
    print_sorted(0,1,2);
    print_sorted(0,2,1);
    print_sorted(1,0,2);
    print_sorted(1,2,0);
    print_sorted(2,1,0);
    print_sorted(2,0,1);
    //tests all cases
}