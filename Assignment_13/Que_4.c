/*  QUESTION
    Write a program which takes the day number of a week and
    displays a unique greeting message for the day.
*/

#include <stdio.h>
int main()
{
    int weekday;
    printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) : \n");
    scanf("%d", &weekday);

    if (weekday == 1)
    {
        printf("Greeting message for \"Monday\" \n");
    }
    else if (weekday == 2)
    {
        printf("Greeting message for \"Tuesday\" \n");
    }
    else if (weekday == 3)
    {
        printf("Greeting message for \"Wednesday\" \n");
    }
    else if (weekday == 4)
    {
        printf("Greeting message for \"Thursday\" \n");
    }
    else if (weekday == 5)
    {
        printf("Greeting message for \"Friday\" \n");
    }
    else if (weekday == 6)
    {
        printf("Greeting message for \"Saturday\" \n");
    }
    else if (weekday == 7)
    {
        printf("Greeting message for \"Sunday\" \n");
    }
    else
        printf("Please enter Valid Number between 1 to 7 \n");

    return 0;
}
