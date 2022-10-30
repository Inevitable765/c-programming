#include<stdio.h>

int main(){
    int l, b, perimeter;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    perimeter = 2*(l+b);
    printf("Perimeter of rectangle: %d", perimeter);
    return 0;
}