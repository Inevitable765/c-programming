#include<stdio.h>

int main(){
    int math, physics, chemistry, english, hindi;
    int Tmarks, percentage;
    printf("Enter marks of math, physics, chemistry, english & hindi: ");
    scanf("%d %d %d %d %d", &math, &physics, &chemistry, &english, &hindi);
    
    Tmarks = math + physics + chemistry + english + hindi;
    percentage = Tmarks * 100 / 500;

    if (percentage >= 33){
        printf("Passed");
    }
    else {
        printf("Failed");
    }
    return 0;
}