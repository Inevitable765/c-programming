#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two differeent number: ");
    scanf("%d %d", &a, &b);
    
    if (a >= b){
      printf("%d is largest number", a);
    }
    else{
      printf("%d is largest number", b);
    }
    return 0;
}
