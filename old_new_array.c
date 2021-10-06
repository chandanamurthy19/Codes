#include <stdio.h>

int main ()
{
		int a_size, b_size,  a[50], b[50], i, location;

		//First array
		printf("Enter the first array size: ");
		scanf("%d", &a_size);

		printf("Enter %d elements to array: \n", a_size);
		for (i = 0 ; i < a_size ; i++)
		{
				scanf("%d", &a[i]);
		}

		printf("Entered first array is: ");
		for (i = 0 ; i < a_size ; i++)
		{
				printf("%d ", a[i]);
		}
		printf("\n");




		//Second array
		printf("Enter the second array size: ");
		scanf("%d", &b_size);

		printf("Enter %d elements to array: \n", b_size);
		for (i = 0 ; i < b_size ; i++)
		{
				scanf("%d", &b[i]);
		}

		printf("Entered second array is: ");
		for (i = 0 ; i < b_size ; i++)
		{
				printf("%d ", b[i]);
		}
		printf("\n");




		//Location in which editing will happen
		printf("Enter the location of new array to be inserted: ");
		scanf("%d", &location);


		//To make space for new elements from entered location
		for ( i = a_size - 1 ; i >= location ; i--)
		{
				a[b_size + i] = a[i];
		}

		//To add elements from one array to another
		for ( i = 0 ; i < b_size ; i++ )
		{
				a[ location + i ] = b[i];
				a_size++;
		}


		//Updated array
		printf("New array is: ");
		for (i = 0 ; i < a_size ; i++)
		{
				printf("%d ", a[i]);
		}
		printf("\n");

}

