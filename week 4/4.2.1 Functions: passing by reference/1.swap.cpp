#include <iostream>
#include <string>
using std::string;

void swap_text(string& t1, string& t2){
    string temp;
    temp = t1;
    t1 = t2;
    t2= temp;
}

int main(){
    string t1, t2;

    std::cout << "input 2 strings" << std::endl;
    std::cin >> t1 >> t2;
    
    swap_text(t1,t2);
    std::cout << t1 << " " << t2;
}