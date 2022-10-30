#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    
    printf("Sum of a and b is: %d\n", a+b);
    printf("Difference between a and b is: %d\n", a-b);
    printf("Product of a and b is: %d\n", a*b);
    printf("Divide of a and b is: %d\n", a/b);

    return 0;
}