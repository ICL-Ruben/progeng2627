### This is a list of all the libraries used so far in the repo

iostream - standard input and output operations

string - allows you to perform several operations with string data types

vector - same thing but with vector data type. Still get the freedom of defining your own terminal output for vectors.

fstream - provides classes for reading and writing to files or data streams

cstdlib - current use is for the EXIT_FAILURE. this is similar to using return 1 in a function, however it is implemented for portability as some POSIX use odd numbers to return succesfully. using EXIT_FAILURE allows for a universal return for failure cases.
