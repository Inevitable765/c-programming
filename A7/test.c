#include<stdio.h>
#include<math.h>
int main()
{int d,b,a,c;
 printf("enter the value of a\n");
 scanf("%d",&a);
 printf("enter the value of b\n");
 scanf("%d",&b);
 printf("enter the value of c\n");
 scanf("%d",&c);
 d=b*b-(4*b*c);
 if (d==0)
  { 
  printf("roots are real and equal");
   } 
 else if (d>0)
  { printf("roots are real and unequal");
  }
 else 
  { printf("roots are imaginary and unequal");
  }
return 0;
}