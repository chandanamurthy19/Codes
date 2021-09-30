#include<stdio.h>
#include<math.h>
int main()
{
		double  a,b,c,disc,r1,r2,i;
		printf("Enter the coefficient of a , b and c: ");
		scanf("%lf%lf%lf",&a,&b,&c);
		if ( a > 0 )
		{
				disc=( (b * b) - (4 * a * c));
				printf("The discriminant is : %lf\n", disc);
		}
		else
		{
				printf("The coefficient of a cannot be zero, please enter again!\n");
		}
		if ( disc < 0 )
		{
				r1=( -b / (2 * a));
				r2=(sqrt(disc)) / (2 * a);
				printf("The roots are complex and different, they are %lf and %lf\n",r1,r2);
		}
		else if ( disc > 0 )
		{
				r1= (-b + (sqrt(disc)) / (2 * a) );
				r2= (-b - (sqrt(disc)) / (2 * a) );
				printf("The roots are real and different, they are %lf and %lf\n",r1,r2);
		}
		else 
		{
				r1= (-b / (2*a));
				r2=r1;
				printf("The roots are real and equal,  they are %lf and %lf\n",r1,r2);
		}

}
