#include<stdio.h>

int main(){
    int km, CENTIMETER;
    printf("[KM TO CENTIMETER CONVERTER]\n");
    printf("Enter the distance between two cities: ");
    scanf("%d", &km);

    CENTIMETER = km * 100000;
    printf("Distance in CentiMeter is: %d", CENTIMETER);
    return 0;
}