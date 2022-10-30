#include<stdio.h>

int main(){
    int a;
    printf("enter a value: ");
    scanf("%d", &a);

    if (a%3 == 0 || a%2 == 0){
        printf("It is Divisible");
    }
    else{
        printf("It is not divisible");
    }
    return 0;
}