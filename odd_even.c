//Declaration of header file
#include<stdio.h>
int main()
{
		//Declaration of variables
		signed long int range=1,num,power;
		char choice;

		//Looping for continue prompt
		while (1)
		{
				//Reads user input
				printf("Enter the number: \n");
				scanf("%ld",&num);

				//Calculates the range for validation
				for (power=0;power<20;power++)
				{
						range=range*2;
				}
				
				//Checks if number is within the range
				if ( num > range || num < -range )
				{
						printf("Error: %ld is in Invalid range\n" , num);
				}
				else
				{
						//Checks if number is positive
						if( num > 0 )
						{
								//Checks if number is even or odd
								if ( num % 2 == 0 )
								{
										printf("The number %ld is positive even\n",num);
								}
								else
								{
										printf("The number %ld is positive odd\n",num);
								}
						}
						else if( num < 0 ) //Checks if the number is negative
						{
								//Checks if number is odd or even
								if ( num % 2 == 0 )
								{
										printf("The number %ld is negative even\n",num);
								}
								else
								{
										printf("The number %ld is negative odd\n",num);
								}
						}
						else
						{
								//When the input number is 0
								printf("The number %ld is neither even nor odd\n",num);
						}
				}

				//Continue prompt
				printf("Do you want to continue? Y / N :\n");
				scanf(" %c", &choice);

				//Checks if choice is yes or no
				if ( choice == 'Y' || choice == 'y')
				{
						//Continues to read input
						continue;
				}
				else if ( choice == 'N' || choice == 'n')
				{
						//Breaks from while loop and exits the program
						break;
				}
				else
				{
						//Invalid choice
						printf("Invalid choice\n");
						break;
				}

		}
}
