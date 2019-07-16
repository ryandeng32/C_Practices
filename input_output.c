#include <stdio.h>

//copy niput to output
int main(void)
{
	int c; 

	while ((c = getchar()) != EOF)
	{
		putchar(c); 
	}
	putchar('\n');
	return 0; 
}