#include<stdio.h>

int main(){
    int s1, s2, s3, s4, s5, aggregate_marks;
    printf("Enter the marks of s1, s2, s3, s4 and s5: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s4);
    aggregate_marks = s1 + s2 + s3 + s4 + s5;
    printf("Aggregate marks is %d", aggregate_marks);
    return 0;
}