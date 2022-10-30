#include<stdio.h>

 void rectangle(); // function prototype
 void square();

int main(){
    rectangle();
    square();      // function calling
    return 0;
}
void rectangle(){  // function define
    int l, b, area, perimeter;
    printf("enter the length and breadth\n");
    scanf("%d %d", &l, &b);
    
    area = l*b;
    perimeter = 2*(l+b);

    printf("area of the rectangle is %d perimeter of the rectangle is %d\n", area, perimeter);  
}

void square(){
    int side, Area, Perimeter;
    printf("enter the side of square");
    scanf("%d", &side);

    Area = side*side;
    Perimeter = 4*side;

    printf("area of square is %d and perimeter of square is %d\n", Area, Perimeter);
    
}