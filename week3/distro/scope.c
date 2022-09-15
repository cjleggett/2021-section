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
void print_current_values(int, int, date, date, int[], int[]);

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
    day2.day = 25;
    day2.year = 2019;
    day2.month = "September";

    int integer2 = 5;
    int array2[ALENGTH] = {1, 2, 3, 4, 5};

    print_current_values(integer1, integer2, day1, day2, array1, array2);

    change(integer2, day2, array2);

    print_current_values(integer1, integer2, day1, day2, array1, array2);

}

// Makes some changes (or does it?)
void change(int integer2, date day2, int array2[])
{
    day1.month = "May";
    day2.month = "May";

    integer1 += integer1;
    integer2 += integer2;

    array1[0] = 20;
    array2[0] = 20;
}



// IGONORE BELOW HERE


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

void print_current_values(int i1, int i2, date d1, date d2, int a1[], int a2[])
{
    printf("\n\n");
    printf("Integer 1: %i\n", i1);
    printf("Integer 2: %i\n", i2);
    printf("Day 1: ");
    print_date(d1);
    printf("Day 2: ");
    print_date(d2);
    printf("Array 1: ");
    printarr(a1);
    printf("Array 2: ");
    printarr(a2);
}
