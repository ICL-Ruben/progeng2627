#include <iostream>
#include <string>

int main(){
    std::string username;
    std::cout << "What is your name?";
    std::cin >> username;
    std::cout << "hello, " << username << std::endl;
}
//bad convention to use username as a variable instead of user_name as it is the USER's name not A username