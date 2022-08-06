#include <stdio.h>


int main(int argc, char** argv) {
    int x; // here we declare a variable called x
    char y; // we can also declare a variable named y
    long x; // this is an error, the variable has already been declared
    float my_float;
    double my_double;

    x = 5; // here we put the value 5 into x
    y = 'd'; // here we put the letter d into the variable y
    my_float = 0.5f; // here we put the value 0.5 into the variable myFloat
                     // note the f at the end, it is important!
    my_double = 7.3d; // note the d at the end here

    int a = 5; // declaring and initiating a variable at the same time
    int b = a; // using the value inside a
}
