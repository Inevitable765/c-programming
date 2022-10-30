#include<stdio.h>

int main(){
    int side, perimeter;
    printf("Enter the side of square: ");
    scanf("%d", &side);
    perimeter = 4*side;
    printf("Perimeter of square is %d", perimeter);
    return 0;
}