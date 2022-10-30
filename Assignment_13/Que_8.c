/*  QUESTION.

    Program to convert a positive number into a negative number
    and negative number into a positive number using a switch statement.
 */


#include <stdio.h>
int main()
{
	int num,result;
	printf("enter a number");
	scanf("%d",&num);
	if(num>0)
	{
		result = -num;
	}
	else
	{
		result = num;
	}
	printf("result = %d",result);
    
    return 0;
}
