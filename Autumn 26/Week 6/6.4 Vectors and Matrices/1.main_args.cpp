#include <iostream>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){
    // argc (argument counter stores the number of characters inputed into the terminal)
    // argv (argument vector points to the characters stored)

    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }

}