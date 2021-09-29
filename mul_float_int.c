#include<stdio.h>
int main()
{
	double a,b,mul;
	printf("Enter two numbers for multiplication: ");
	scanf("%lf%lf", &a,&b);
	mul=a * b;
	printf("Product of %lf and %lf is: %g\n",a,b, mul);
	return 0;
}

