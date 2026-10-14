#include<stdio.h>
int main()
{
	int number;
	printf("Enter the value of number:");
	scanf("%d",&number);
	if(number%2==0)
	{
	  printf("The number %d even",number);
    }
    else
    {
    	printf("The number %d odd",number);
	}
    return 0;
}
