#include<stdio.h>

int main(){
    float celsius, far;
    printf("Fahrenheit to Celsius Converter\n");
    printf("Enter Fahrenheit: ");
    scanf("%f", &far);
    celsius = ((far-32)*5)/9;
    printf("The value of this fahrenheit temperature in celsius is %f", celsius);
    return 0;
}