#include<stdio.h>

int main(){
    int a;
    printf("enter any number: ");
    scanf("%d", &a);

    if (a%5==0)
    {
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
    
    return 0;
}