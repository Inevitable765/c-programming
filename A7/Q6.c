#include<stdio.h>

int main(){
    int i;
    printf("enter a number");
    scanf("%d", &i);
    
    if (i%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}