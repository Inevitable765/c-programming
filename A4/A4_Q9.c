#include<stdio.h>

int main(){
    int feet, inches;
    printf("[FEET TO INCHES]\n");
    printf("Enter the Height of student: ");
    scanf("%d", &feet);

    inches = feet * 12;
    printf("Height in Inche is: %d", inches);
    return 0;
}