#include<stdio.h>
int main()
{
	//Declare variables a and b 
	int a,b,c;

	//Read user input
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);

	//Check which is greater
	if (a > b && a > c)
	{
		printf("%d is greatest\n",a);
	}
	else if (b > a && b > c)
	{
		printf("%d is greatest\n",b);
	}
	else
	{
		printf("%d is greater\n",c);
	}
	return 0;
}

