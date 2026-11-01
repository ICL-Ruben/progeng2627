# progeng2627

These are my tasks for ELEC40004 - Programming For Engineers. By Ruben Fuguett Gutierrez.
Started notes from 'Week 4 Functions' and onwards

# Functions

you can make a function by defining its data type and input parameters. 

e.g {data type} {name of function}({data type of input parameter 1}{name of input parameter 1}, ...)

then define what the function does and return an output to the console. 

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
