#include <stdio.h>

/* copy input to output, replace tab by \t, backspace by \b, backslash by \\ */
int main(void)
{
	int c; 
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t"); 
		else if (c == '\\')
			printf("\\\\"); 
	 	else
	    	putchar(c);
	}

	return 0; 
}