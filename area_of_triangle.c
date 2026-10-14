# include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter the base and height values");
	scanf("%f %f",&base,&height);
	area = 0.5*base*height;
	printf("the area of triangle is %.3f",area);
	return 0;
}
