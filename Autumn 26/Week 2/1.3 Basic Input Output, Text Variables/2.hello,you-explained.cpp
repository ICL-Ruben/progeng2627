#include <iostream>
#include <string>
// this includes the header for text variables

int main(){
    std::string username;
    //decleares the username variable. std::string is the type of variable

    std::cout << "What is your name?";
    std::cin >> username;
    // this instruction reads information from the keyboard. cin = console input that is stored into username variable

    std::cout << "hello, " << username << std::endl;
}
//end of main function