#include <stdio.h>

// print a histogram of the frequencies of different characters in its input.
int main(void)
{
	// create array
	// count frequency
	// display as a vertical histogram

	int alpha[26]; 
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0; 
	}
	int c; 

	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			alpha[c - 'a']++; 
		else if (c >= 'A' && c <= 'Z')
			alpha[c - 'A']++; 
	}

	printf("----------------------------\n"); 
	int max = 0; 
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
			max = alpha[i]; 
	}

	for (int i = 0, n = max; i < n; i++)
	{
		printf("%4i|", max); 
		for (int j = 0; j < 26; j++)
		{
			if (alpha[j] >= max)
				printf(" * "); 
			else
				printf("   "); 
		}
		max--; 
		putchar('\n'); 
	}
	printf("    ____________________________________________\n"); 
	printf("     "); 
	for (int i = 0; i < 26; i++)
		printf("%3C",'A' + i); 
	printf("\n"); 
	return 0; 
}