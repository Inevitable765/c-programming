#include<stdio.h>

int main(){
    int l;
    int b;
    int area;
    printf("enter the length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    printf("Area of the rectangle: %d", area);
    return 0;
}