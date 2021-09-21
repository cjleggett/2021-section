#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ALENGTH 5

// Defining our date struct
typedef struct
{
    int day, year;
    string month;
}
date;

// Declaring functions
void change(int, date, int[]);
void printarr(int[]);
void print_date(date);

// Declaring some variables
date day1;
int integer1 = 5;
int array1[ALENGTH] = {1, 2, 3, 4, 5};

int main(void)
{
    // add values for day1:
    day1.day = 25;
    day1.year = 2019;
    day1.month = "September";

    // create a new date, integer, and array
    date day2;
    day2.day = 26;
    day2.year = 2020;
    day2.month = "October";

    int integer2 = 10;
    int array2[ALENGTH] = {5, 4, 3, 2, 1};

    // Prints current values:
    printf("Integer 1: %i\n", integer1);
    printf("Integer 2: %i\n", integer2);
    printf("Day 1: ");
    print_date(day1);
    printf("Day 2: ");
    print_date(day2);
    printf("Array 1: ");
    printarr(array1);
    printf("Array 2: ");
    printarr(array2);

    change(integer2, day2, array2);

    // Prints current values:
    printf("\n\n");
    printf("Integer 1: %i\n", integer1);
    printf("Integer 2: %i\n", integer2);
    printf("Day 1: ");
    print_date(day1);
    printf("Day 2: ");
    print_date(day2);
    printf("Array 1: ");
    printarr(array1);
    printf("Array 2: ");
    printarr(array2);

}

// Makes some changes (or does it?)
void change(int integer2, date day2, int array2[])
{
    day1.month = "May";
    day2.month = "May";

    integer1 += 1;
    integer2 += 1;

    array1[0] = 20;
    array2[0] = 20;
}

// Prints out a date struct
void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}

// Prints an array (no need to worry about how this works at the moment!)
void printarr(int array[])
{
    printf("[");
    for (int i = 0; i < ALENGTH; i ++)
    {
        printf("%i", array[i]);
        if (i != ALENGTH - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}