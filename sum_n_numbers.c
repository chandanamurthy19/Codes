#include<stdio.h>
int main()
{
		int n,i,sum=0;
		printf("Enter the number: ");
		scanf("%d",&n);
		for (i=1;i<n;i++)
		{
				sum+=i;
		}
		printf("The sum of numbers upto %d is %d\n",n,sum);
}
