#include<stdio.h>
int main()
{
	double a,b,mul;
	printf("Enter two numbers for multiplication: ");
	scanf("%lf %lf", &a,&b);
	mul=a * b;
	printf("Product is: %lf\n", mul);
	return 0;
}

