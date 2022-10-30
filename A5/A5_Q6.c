#include<stdio.h>

int main(){
    int radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    int pie = 3;
    area = pie*radius*radius;
    printf("Area of circle is %d", area);
    return 0;
}