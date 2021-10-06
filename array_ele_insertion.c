#include <stdio.h>

int main ()
{
		int size, arr[50], i, element, location;
		printf("Enter the array size: ");
		scanf("%d", &size);
		printf("Enter %d elements to array: \n", size);
		for (i = 0 ; i < size ; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Entered array is: ");
		for (i = 0 ; i < size ; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");

		printf("Enter the new element to be inserted: ");
		scanf("%d", &element);
		printf("Enter the location of new element to be inserted: ");
		scanf("%d", &location);
		for ( i = size - 1 ; i >= location ; i--)
		{
				arr[i + 1] = arr[i];
		}
		arr[location] = element;
		printf("New array is: ");
		for (i = 0 ; i < size + 1 ; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");

}

