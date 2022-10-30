// QUESTION.
//    Program to check whether a year is a leap year or not. Using switch statement.

#include <stdio.h>
int main()
{
    int year, b;
    printf("check leap year \"please enter 1\" \n");
    scanf("%d", &year);
    switch (year)
    {
    case 1:
    {
        printf("enter year");
        scanf("%d", &b);
        if (b % 4 == 0)
            printf("this year is a leap year");
        else
            printf("this year is not a leap year");
    }
    break;
    }

    return 0;
}
