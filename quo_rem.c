#include<stdio.h>
int main()
{
		signed int dividend,quotient,remainder,divisor;
		printf("Enter a dividend: ");
		scanf("%d",&dividend);
		printf("Enter a divisor: ");
		scanf("%d",&divisor);
		if ( divisor == 0 )
		{
				printf("Enter a positive divisor\n");
		}
		else
		{
				quotient= dividend / divisor ;
				remainder=dividend % divisor ;
				printf("The quotient is %d\n", quotient);
				printf("The remainder is %d\n", remainder);
		}
		return 0;
}



