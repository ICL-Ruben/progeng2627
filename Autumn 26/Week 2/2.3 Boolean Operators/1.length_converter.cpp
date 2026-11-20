#include <iostream>
#include <string>

int main(){
    float length_in, length_out;
    std::string unit_in, unit_out;

    const float mile_to_km = 1.609;

    std::cout << "Type in the length and unit you want converted. Either km or mile" << std::endl;;
    std::cin >> length_in >> unit_in;

    if(unit_in == "km"){

        unit_out = "mile";
        length_out = length_in / mile_to_km;
        std::cout << length_in << " " << unit_in << " is " << length_out << " " << unit_out << std::endl;  
    }
    else if(unit_in == "mile"){

        unit_out = "km";
        length_out = length_in * mile_to_km;
        std::cout << length_in << " " << unit_in << " is " << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "Type the right format you dingus" << std::endl;
    } 
}