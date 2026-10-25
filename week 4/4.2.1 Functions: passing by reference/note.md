# Passing by reference vs passing by copy

Passing by reference allows the function to change the input parameters while in the function. 
Passing by copy does not allow this to happen, this could be used to make code secure so that variables dont change unexpectedly. 
Pass by reference can also be used to optimise using large data types like vectors as the function would not need to copy the large vector.

Passing by reference is done by adding an ampersand (&) between the parameter's data type and the parameter. 
e.g - void function(int& x,int& y). This function would pass x and y by reference and would not return anything as it is a **Void** function.
