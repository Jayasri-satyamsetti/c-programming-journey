#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the First Number :",a);
	scanf("%d",&a);
	
	printf("Enter the Second Number :",b);
	scanf("%d",&b);
	
	printf("Enter the Third Number :",c);
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	{
		printf("%d is largest of the three numbers");
	}
	else if(b>=a && b>=c)
	{
		printf("%d is largest of the three numbers");
	}
	else
	{
		printf("%d is largest of the three numbers");
	}
	return 0;
}
