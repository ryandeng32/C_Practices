#include <stdio.h>
#define IN 0 
#define OUT 1

int main(void)
{
	int state, c; 
	state = OUT; 
	while((c = getchar()) != EOF)
	{	
		if (c == ' ' || c == '\t')
		{
			if (state == OUT)
			{
				state = IN; 
				putchar('\n'); 
			}
		}
		else
		{
			putchar(c); 
			state = OUT;
		}

	}

	return 0; 
}