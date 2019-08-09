/* this program requests the user to enter an uppercase letter, it then uses nested loops to produce a pyramid pattern like this
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <stdio.h>
int main(void)
{
	char upTo;
	do 
	{
	printf("Please enter an uppercase letter: "); 
	scanf("%c", &upTo); 
	} while (upTo < 'A' || upTo > 'Z'); 
	int row = upTo - 'A' + 1; 


	for (int i = 0; i < row; i++)
	{
		for (int space = row; space > i + 1; space--)
			printf(" ");

		for (int j = 0; j < i; j++)
			printf("%c", 'A' + j); 

		printf("%c", 'A' + i); 

		for (int j = 0; j < i; j++)
			printf("%c", 'A' + i - j - 1);

		printf("\n");
	}

	return 0;
}