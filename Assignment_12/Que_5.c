/*  QUESTION.
    write a program to make the last digit of a number stored in a variable
    as zero.(Example - if num = 5678 then make it num = 5670)
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter any integer \n");
    scanf("%d", &x);
    x = x / 10 * 10;
    printf("%d", x);

    return 0;
}
