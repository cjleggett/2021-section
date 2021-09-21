#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// Task: Write a recursive function that counts down from a number
// Example: 
// Input: 5
// Output: 
// 5
// 4
// 3
// 2
// 1

void countdown(int start);

int main(void) 
{
    int n = get_int("Starting Number: ");
    countdown(n);
}

void countdown(int start)
{
    if (start == 0)
    {
        return;
    }
    printf("%i\n", start);
    countdown(start - 1);
}