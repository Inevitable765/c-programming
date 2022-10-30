#include<stdio.h>

int main(){
    float salary, da;
    printf("Enter Ramesh Salary: ");
    scanf("%f", &salary);
    da = salary*0.4;
    printf("Total salary is %f", salary+da);
    return 0;
}