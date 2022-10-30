#include<stdio.h>

 void rectangle();
 void square();
 void circle();

int main(){
    rectangle();
    square();
    circle();
    return 0;
}
void rectangle(){
    int l, b, area, perimeter;
    printf("enter the length and breadth: ");
    scanf("%d %d", &l, &b);
    
    area = l*b;
    perimeter = 2*(l+b);

    printf("area of the rectangle is %d perimeter of the rectangle is %d\n", area, perimeter);  
}

void square(){
    int side, Area, Perimeter;
    printf("enter the side of square: ");
    scanf("%d", &side);

    Area = side*side;
    Perimeter = 4*side;

    printf("area of square is %d and perimeter of square is %d\n", Area, Perimeter);
    
}

void circle(){
    int radius, Area, circumference;
    printf("enter radius: ");
    scanf("%d", &radius),
    
    Area = 3*radius*radius;
    circumference = 3*2*radius;
    
    printf("area of circle is %d and circumference of circle is %d\n", Area , circumference);
}