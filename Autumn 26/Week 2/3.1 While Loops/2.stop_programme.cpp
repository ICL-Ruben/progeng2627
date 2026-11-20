#include <iostream>
#include <string>

int main(){
    std::string input;
    do {
        std::cout << "Type stop to terminate the programme" << std::endl;
        std::cin >> input;
    } while (input != "stop" && input != "Stop" && input != "STOP");
}