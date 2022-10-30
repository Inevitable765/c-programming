// QUESTION.
//      WAP to print square of first 10 natural numbers.
#include <stdio.h>
int main()
{

    int n, sq;
    while (n <= 10)
    {
        sq = n * n;
        printf("%d ", sq);
        n++;
    }
    return 0;
}
