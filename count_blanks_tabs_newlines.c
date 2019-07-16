#include <stdio.h>

// this program will count blanks, tabs, and newlines of a text stream
int main(void)
{
	int nb, nt, nn;    // num of blanks, num of tabs, num of newlines
	int c; 

	nb = 0; 
	nt = 0; 
	nn = 0; 
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nb;  
		else if (c == '\t')
			++nt; 
		else if (c == '\n')
			++nn;
	}
	printf("Blanks: %6i\n", nb); 
	printf("Tabs: %8i\n", nt); 
	printf("Newlines: %4i\n", nn); 

	return 0; 
}
