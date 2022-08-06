#include <stdio.h>


int main(int argc, char** argv) {
    int a = 5; // a is 5
    int b = a * 7; // b is 35

    b += 10; // b is now 45

    int c += 3; // this is an error, c has no value so we can't add 3 to it;

    // these two lines look like they do the same thing right?
    // we will learn why they are different later, but for now
    // you may use them interchangably
    a++;
    ++a;

    int x = 7 % 3; // we calculate 7 / 3 and store the remainder, meaning: x = 1

    x /= 2; // the same as x = x / 2, because division of integers always rounds down, x = 0

    x = 3;
    x *= x + x + 3 * x; // the same as x = x * (x + x + (3 * x)) = 45
}
