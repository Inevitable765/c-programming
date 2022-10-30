#include<stdio.h>

int main(){
    int dis, cm, mm, inch;
    printf("Enter the distance between two cities: ");
    scanf("%d", &dis);
    
    cm = dis*1000*100;
    printf("Distance in cm: %d\n", cm);

    mm = dis*1000*1000;
    printf("Distance in mm: %d\n", mm);

    inch = dis*40000;
    printf("Distance in inch: %d", inch);



    return 0;
}