#include<stdio.h>
void check_division();

int main()
{
  check_division();
  return 0;
}
void check_division()
{
  int tmarks, per;
  printf("enter the marks\n");
  scanf("%d", &tmarks);

  per = tmarks/10;

  if (per>=75)
  {
    printf("FD");
  }
  else if (per<75 && per>=75)
  {
    printf("SD");
  }
  else if (per<50 && per>=36)
  {
    printf("TD");
  }
  else
  {
    printf("fail");
  }
}