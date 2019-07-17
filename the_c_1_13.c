#include <stdio.h>

// print a histogram of the lengths of words in its input vertically
int main(void)
{
	// create array to keep track of length of words
	// count length of word
	// display the array in the form of a vertical histogram

	int len_of_words[15]; // assume the longest word is 15 characters
	int c, prev, len; 

	len = 0; 
	for (int i = 0; i < 15; i++)
	{
		len_of_words[i] = 0; 
	}

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (prev != ' ' && prev != '\t' && prev != '\n' && len != 0)
			{
				len_of_words[len - 1] += 1; 
				len = 0; 
			}
		}
		else
			len++; 
	}

	printf("-------------HORIZONTAL------------------\n"); 
	for (int i = 0; i < 15; i++)
	{
		printf("%i: ", i+1);
		for (int j = 0; j < len_of_words[i]; j++)
			printf("*"); 
		printf("\n");  
	}
	printf("-------------------------------------------\n"); 

	printf("-----------------VERTICAL------------------\n"); 
	int max = 0; 
	for (int i = 0; i < 15; i++)
	{
		if (len_of_words[i] > max)
			max = len_of_words[i];
	}

	for (int i = 0, n = max; i < n; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (len_of_words[j] >= max)
				printf(" * "); 
			else
				printf("   "); 
		}
		printf("\n"); 
		max--;
	}
	for (int i = 1; i <= 15; i++)
	{
		printf(" %i ", i);
	}
	printf("\n"); 

	return 0; 

}