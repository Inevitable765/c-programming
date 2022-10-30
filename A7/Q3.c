#include<stdio.h>

int main(){
    int a;
    printf("Enter the number between 1 and 100: ");
    scanf("%d", &a);
    
    if (a>=50&&a<=100){
        printf("SUCCESS");
    }
    else {
        printf("FAIL");
    }
    return 0;
}