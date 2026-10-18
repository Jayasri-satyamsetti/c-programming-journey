#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	
	printf("Enter the second number:");
	scanf("%d",&b);
	
	printf("Addition = %d\n",a+b);
	printf("Subtraction = %d\n",a-b);
	printf("Multiplication = %d\n",a*b);
	
	if(b!=0)
	{
		printf("Division = %.2f",(float)a/b);
	}
	else
	{
		printf("Division is not possible because second number is zero.\n");
	}
	return 0;
}
