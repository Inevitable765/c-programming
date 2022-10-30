#include<stdio.h>

int main(){
 int english ,maths,sst,science,hindi;

 printf("enter marks of english=\n");
 scanf("%d",&english);
 printf("enter marks of maths=\n");
 scanf("%d",&maths);
 printf("enter marks of sst=\n");
 scanf("%d",&sst);
 printf("enter marks of science=\n");
 scanf("%d",&science);
 printf("enter marks of hindi=\n");
 scanf("%d",&hindi);

 //total marks = english+ maths+ sst+hindi+science
 int total=english+maths+sst+hindi+science;
 printf("aggregate marks=%d\n",total);

 int percent=total*100/500;
 printf("your percentage is%d\n ",percent);

 int average=total/5;
 printf("marks average is:%d\n",average);

return 0;
}