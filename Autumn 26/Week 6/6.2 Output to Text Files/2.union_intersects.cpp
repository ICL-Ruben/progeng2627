#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++)
        if(s == vin[i]){
            return true;
        }
    return false; 
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2)){
            vout.push_back(vin1[i]);
        }
    }
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout = vin1;
    for(int i = 0; i < vin2.size(); i++){
        if(!search_vector(vin2[i], vin1)){
            vout.push_back(vin2[i]);
        }
    }
}

int main(){
    std::ifstream warehouse1, warehouse2;  // input stream handling

    warehouse1.open("2.warehouse1.txt");
    warehouse2.open("2.warehouse2.txt");

    if(!warehouse1.is_open()){
        std::cout << "Error opening 2.warehouse1.txt" << std::endl;
        return EXIT_FAILURE;
    }
    if(!warehouse2.is_open()){
        std::cout << "Error opening 2.warehouse2.txt" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> vin1, vin2, vout_intersection, vout_union;
    std::string tmp;

    while(warehouse1 >> tmp){
        vin1.push_back(tmp);
    }
    while(warehouse2 >> tmp){
        vin2.push_back(tmp);
    }

    warehouse1.close();
    warehouse2.close();

    intersection_vector(vin1, vin2, vout_intersection); //putting the input text file vectors through the functions
    union_vector(vin1, vin2, vout_union);

    std::ofstream intersection_file, union_file; //output stream handling

    intersection_file.open("2.intersection.txt"); 
    union_file.open("2.union.txt");

    for(int i = 0; i < vout_intersection.size(); i++){
        intersection_file << vout_intersection[i] << std::endl;
    }
    for(int i = 0; i < vout_union.size(); i++){
        union_file << vout_union[i] << std::endl;
    }

    intersection_file.close();
    union_file.close();
    std::cout << "Programme done";
    return 0;
}