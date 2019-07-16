#include <stdio.h>

/* write a program to copy its input to its output,
   , replacing each string of one or more blanks by a single blank */

int main(void)
{
	int c; 
	int onBlank = 0; 
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			onBlank = 1; 
		else 
		{	
			if (onBlank)
			{
				putchar(' '); 
				onBlank = 0; 
			}
			putchar(c); 
		}
	}

	return 0; 
}