#include<stdio.h>

int main(){
    int a, b, n;

    printf("enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    

    if (n == 1){
        printf("sum of a and b is: %d\n", a+b);
    }
    else if (n == 2){
        printf("difference of a and b is: %d\n", a-b);
    }
    else if (n == 3){
        printf("product of a and b is: %d\n", a*b);
    }
    else if (n == 4) {
        printf("quotient of a and b is: %d\n", a/b);
    }
    else {
        printf("please enter digit between 1-4");
    }
    return 0;
}