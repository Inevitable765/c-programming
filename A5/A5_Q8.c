#include<stdio.h>

int main(){
    int a, b, c, sum;
    printf("enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("Sum of the three sides of a triangle is %d", sum);
    return 0;
}