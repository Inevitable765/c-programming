#include<stdio.h>

int main(){
    int a;
    printf("enter a value: ");
    scanf("%d", &a);

    if (a%7 == 0 || a%3 == 0){
        printf("It is Divisible");
    }
    else{
        printf("It is not divisible");
    }
    return 0;
}