// QUESTION.
//      WAP to print first 10 odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n;
    for (n = 21; n >= 1; n = n - 2)
    {
        printf("%d ,", n);
    }

    return 0;
}
