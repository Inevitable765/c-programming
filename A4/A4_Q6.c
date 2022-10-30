#include<stdio.h>

int main(){
    int km, meter;
    printf("[KM TO METER CONVERTER]\n");
    printf("Enter the distance between two cities: ");
    scanf("%d", &km);

    meter = km * 1000;
    printf("Distance in Meter is: %d", meter);
    return 0;
}