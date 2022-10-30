#include <stdio.h>
int main()
{
    int a;
    printf("Enter any integer \n");
    scanf("%d", &a);
    a = a / 10 * 10;
    printf("%d", a);

    return 0;
}
