#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
    int day, year;
    string month;
}
date;

void print_date(date);

int main(void)
{
    date today;
    today.day = 21;
    today.year = 2021;
    today.month = "September";
    print_date(today);
}

void print_date(date d)
{
    printf("%s %i, %i\n", d.month, d.day, d.year);
}