#include<stdio.h>
int main()
{
		int a,b,temp,not;
		printf("Enter two numbers to swap\n");
		scanf("%d%d",&a,&b);

		/*

		//Swapping using variable:

		temp=a;
		a=b;
		b=temp;
		printf("Using variable\n");
		printf("Two numbers after swapping: %d and %d\n",a,b);

		//Swapping with NO variable:
		a=a+b;
		b=a-b;
		a=a-b;
		printf("Using no variable\n");
		printf("Two numbers after swapping: %d and %d\n",a,b);

		//Swapping using bitwise operator:
		a=a^b;
		b=a^b;
		a=a^b;
		printf("Using bitwise ^\n");
		printf("Two numbers after swapping: %d and %d\n",a,b);

		*/
		a=(a&b) + (a|b);
		b=a+(~b);
		a=a+(~b);
		not=~b;
		printf("not value is %d", not);
		printf("Two numbers after swapping: %d and %d\n",a,b);
		return 0;
}

