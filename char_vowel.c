#include<stdio.h>
int main()
{
		char c;
		printf("Enter a character: ");
		scanf("%c", &c);
		if (c == 'a'|| c == 'e'|| c=='i' || c=='o'|| c=='u'|| c == 'A'|| c == 'E'|| c=='I' || c=='O'|| c=='U')
		{
				printf("You have entered a vowel , %c\n",c);
		}
		else
		{
				printf("You have entered a consonant , %c\n",c);
		}
		return 0;
}

