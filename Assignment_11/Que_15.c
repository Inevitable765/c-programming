#include <stdio.h>
int main()
{
    int n, sq;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    while (n <= 10)
    {
        sq = n * n;
        printf("%d ", sq);
        n++;
    }
    return 0;
}
