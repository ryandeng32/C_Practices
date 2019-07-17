#include <stdio.h>

// print all input lines that are longer than 80 characters
int main(void)
{
	char line[100]; 
	int c; 
	int count = 0; 
	while((c = getchar()) != EOF)
	{
		if (c != '\n'){
			line[count] = c;
			count++; }
		else
		{
			if (count >= 80)
			{	
				line[count] = '\0'; 
				printf("%s\n", line); 
				printf("%i is the length\n", count); 
				count = 0; 
			}
			else
			{
				printf("%i is the length\n", count); 
				count = 0; 
			}

		}
	}
	return 0; 
}