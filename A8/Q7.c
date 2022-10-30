#include<stdio.h>
//assume 1 usd = 80 inr
int main(){
    float INR,USD;

    printf("enter your  money(INR): ");
    scanf("%f",&INR);

    USD=INR/80;

    printf("in usd=%f",USD);

    return 0;
}