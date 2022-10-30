#include<stdio.h>

int main(){
    int radius, circumference;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    circumference = 2*3*radius;
    printf("circcumference of circle is %d", circumference);
    return 0;
}