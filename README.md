#### progeng2627

These are my tasks for ELEC40004 - Programming For Engineers. By Ruben Fuguett Gutierrez.
Started notes from 'Week 4 Functions' and onwards

# Functions

you can make a function by defining its data type and input parameters. 

e.g {data type} {name of function}({data type of input parameter 1}{name of input parameter 1}, ...) then define what the function does and return an output to the console. The data type can include any pre-established data type 

This new function can now be called later using {name of function}({argument assigned to input parameter 1}, ...)

passing by copy means that you send a variable to a function and the program creates a separate duplicate of that value in memory. The function then gets a copy of this value which is passed to the input parameter.

functions are used as each function has a different environment with a different scope. This reduces the complexity of the software.

the 'main' function returns a n int which is used for error checks.

functions need to be declared before they can be called. However, the definition of a function can be made **before or after** calling it.

## Passing by reference vs passing by copy

Passing by reference allows the function to change the input parameters while in the function. 
Passing by copy does not allow this to happen, this could be used to make code secure so that variables don't change unexpectedly. 
Pass by reference can also be used to optimise using large data types like vectors as the function would not need to copy the large vector.

Passing by reference is done by adding an ampersand (&) between the parameter's data type and the parameter. 
e.g - void function(int& x,int& y). This function would pass x and y by reference and would not return anything as it is a **Void** function.

## Function Outputs

You can use passing by reference to output more than one thing. Instead of using the return command you can call the output inside the function curly brackets.

You can change the return to be a Boolean which allows for conditional statements to be made about the function. 

# Vectors

To create a vector you have to first include the 'vector' module in your programme.
After including it you can create a vector by using "std::vector<> {vector name};"
This will initialise a vector with 0 terms.

You can add elements by using '{vector name}.push_back({new element})'
The vector now contains this element.
Each element has an index going from 0-n (where n is the size of the vector)

You can output the size of a vector by using '{vector name}.size()'.
If you print this it will print the number of elements in the vector.

You cannot print a vector by doing 'std::cout << {vector name}'. But why?
Because there is no standard way for C++ to print the vector as it could be formatted in many ways.
C++ leaves it up to the developer to decide how the vector can be printed.
This means you can implement your own function to print the vector (most likely using for loops)

## Passing by const reference

Passing by const reference is useful for functions where vectors are used as inputs and outputs. 
Passing the entire vector by copy can be very computationally heavy and passing by reference may be unsafe for the specific application.
Passing it by const reference allows the variable to NOT be edited while also not having to copy the vector which would be slow.



It is done the same way as passing by reference except you declare that it is a 'const' vector data type.

Nowadays, copmilers do the job of not making unnecesary copies so you can pass by copy and allow the compiler to do its magic

# Text Files

Using the fstream library you can input (text -> programme) and output (programme -> text) with files. If you are opening a file using a user input, you do not need to use quotation marks as the string library will take care of this. 

To use the input stream you define an object that will be used to contain the file. Then you open the file using the .open(Filename) function. Then you can write to a variable, a pointer is used to look at the first thing in the file (you can  also choose to look at a certain part of the file and the pointer will select this point in the file). Then you can print this variable to the terminal.

You can also choose to make a while loop that pushes back a vector while the pointer has something to point to. e.g while(ifstream_object >> tmp). This means do whatever is inside the while loop 'while ifstream_object has something to output to the temporary variable'. Then you can push the tmp value to the vector and print the vector after.

