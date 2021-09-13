#include <cs50.h>
#include <stdio.h>
#include <string.h>

// This is a detailed explanation of string mutability. No need to read it unless interested!

int main(void)
{
    // We know that we can mutate an array like this:
    int nums[3] = {2, 3, 4};            // nums is now the length 3 array of [2, 3, 4]
    nums[0] = 1;                        // nums is now the length 3 array of [1, 3, 4]

    // And we've previously stated that a string is basically an array of chars. This is generally true, which is why the following code works:
    char name[7] = "Connor\0";
    printf("Name: %s\n", name);
    name[0] = 'D';                      // changes first character to 'D'
    printf("New Name: %s\n", name);
    printf("\n");


    // the string library, however, uses something that you'll go over next week known as a pointer.
    // That means that this line of code:
    char *text1 = "Connor";
    // Is exactly the same as this line of code (except for the variable name change):
    string text2 = "Kalos";

    printf("Text 1: %s\n", text1);
    printf("Text 2: %s\n", text2);

    /*An overly simple definition of a pointer is an address somewhere in your computer's memory. A cool way to see this in action is to try
    running this program by typing "debug50 ./mutability" and stepping through each line. You should see for text and text2 that the debugger
    shows both the address (looks something like 0x42ab0d) and the value.

    The mutability differences come in the different places these values are stored. Some things are stored in read-write memory, which means
    we can view and edit the data, and others are stored in read-only memory, which means we can view the data but not edit it.

    Every element of an array is stored in read-write memory, which is why we can edit individual characters, and why we can edit strings when
    they are stored explicitly as arrays of chars (as in lines 12-15). When we store strings as "char stars" (as in lines 19-21, remember that
    those two lines do the exact same thing) however, the pointer (or address) is stored in read-write memory, but the characters themselves
    are stored in read-only memory. This is why we get an error if you uncomment the following code: */

    // text1[0] = 'D';
    printf("\n");

    /*we get a confusing looking error (go ahead and try it if you want). This error comes about because we are attempting to change memory
    that we are only allowed to read.

    If you want to change a string or a char*, you have to either 1) put it in array form or 2) change the pointer to a new place in the
    memory where a new set of chars is located. This second part seems scary, but it is automatically done for you in C whenever you
    change the entire value of a string. To illustrate this concept, step through the following code using debug50, and notice how the
    addresses change for the char* and string whenever the value changes, but the value of the elements of the array can be changed
    without changing its location in memory.*/

    // setting up variables:
    char *text3 = "Hello";
    string text4 = "abc";
    char text5[4] = "Moo\0";

    // printing variables
    printf("Text 3: %s\n", text3);
    printf("Text 4: %s\n", text4);
    printf("Text 5: %s\n", text5);

    // altering the variables:
    text3 = "Goodbye";
    text4 = "cba";
    text5[0] = 'B';

    //printing changed variables:
    printf("New Text 3: %s\n", text3);
    printf("New Text 4: %s\n", text4);
    printf("New Text 5: %s\n", text5);

}