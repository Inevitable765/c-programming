#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three side of triangle a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c){
        printf("The triangle is valid");
    }
    else {
        printf("The triangle is not valid");
    }
    return 0;
}