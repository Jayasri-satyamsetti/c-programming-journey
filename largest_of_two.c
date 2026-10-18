#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	if(a>b)
	{
    printf("largest number is %d",a);
    }
	else if(b>a)
	{
	printf("largest number is %d",b);
    }
	else
	{
	printf("both number are equal");
    }
	return 0;
}
