#include <stdio.h>
int main()
{
    int a, b;

    printf("enter  a  number: ");
    scanf("%d", &a);

    b = a % 10;

    printf("unit digit of given number is %d", b);

    return 0;
}
