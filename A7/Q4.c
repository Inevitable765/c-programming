#include<stdio.h>

int main(){
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    if (n>10)
    {
        printf("%d is greater than 10", n);
    }
    else if (n==10)
    {
        printf("%d is equal to 10", n);
    }
    else if (n<10)
    {
        printf("%d is less than 10", n);
    }
    else {}
    
    
    
    return 0;
}