#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(t > vin[i]){
            vout.push_back(vin[i]);
        }
    }    
}

int main(){
    std::vector<double> vin{1,0,-1,2,3,6,8,3} , vout;
    double n;
    std::cin >> n;
    filter_v(vin,n,vout);

    for(int i = 0; i < vout.size(); i++){
            std::cout << vout[i] << std::endl;
    }
}