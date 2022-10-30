#include<stdio.h>

int main(){
int month;

printf("enter month number from 1 to 10");
scanf("%d",&month);

if(month==1){
    printf("MONTH IS JANUARY AND NO OF DAYS IS 30");
}
else if(month==2){
    printf("MONTH IS FEBRUARY AND NO OF DAYS IS 28 or 29");
}
else if(month==3){
    printf("MONTH IS MARCH AND NO OF DAYS IS 31");
}
else if(month==4){
    printf("MONTH IS APRIL AND NO OF DAYS IS 30");
}
else if(month==5){
    printf("MONTH IS MAY AND NO OF DAYS IS 31");
}
else if(month==6){
    printf("MONTH IS JUNE AND NO OF DAYS IS 30");
}
else if(month==7){
    printf("MONTH IS JULY AND NO OF DAYS IS 31");
}
else if(month==8){
    printf("MONTH IS AUGUST AND NO OF DAYS IS 31");
}
else if(month==9){
    printf("MONTH IS SEPTEMBER AND NO OF DAYS IS 30");
}
else if(month==10){
    printf("MONTH IS OCTOBER AND NO OF DAYS IS 31");
}
else if(month==11){
    printf("MONTH IS NOVEMBER AND NO OF DAYS IS 30");
}
else if(month==12){
    printf("MONTH IS DECEMBER AND NO OF DAYS IS 31");
}
else{
    printf("ENTER VALID NUMBER");
}




return 0;
}
