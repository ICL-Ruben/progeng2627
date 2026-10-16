#include <iostream>
#include <string>

int main(){
    float temp_in, temp_out;
    std::string unit_in, unit_out;

    std::cout << "Type in the temp you went converted. F or C" << std::endl;;
    std::cin >> temp_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "F" ||unit_in == "f"){
        
        unit_out = "C";
        temp_out = (temp_in - 32) *5/9;
    }
    else if(unit_in == "C" || unit_in == "c"){

        unit_out = "F";
        temp_out = temp_in * 9/5 + 32;
    }
    else{
        valid_unit = false;
    } 

    if(valid_unit == true){
        std::cout << temp_in << " " << unit_in << " is " << temp_out << " " << unit_out << std::endl;  
    }
    else{
        std::cout << "Type the right format you dingus" << std::endl;
    }
}