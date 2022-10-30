#include<stdio.h>

int main(){
    int km, millimeter;
    printf("[KM TO MILLIMETER CONVERTER]\n");
    printf("Enter the distance between two cities: ");
    scanf("%d", &km);

    millimeter = km * 1000000;
    printf("Distance in Meter is: %d", millimeter);
    return 0;
}