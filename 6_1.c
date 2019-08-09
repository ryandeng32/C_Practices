// this program ccreates an array with 26 elements and stores the 26 lowercase letters in it

#include <stdio.h>
int main(void)
{
	char letters[26]; 

	for (int i = 0; i < 26; i++)
	{
		letters[i] = 'a' + i; 
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%2d: %c\n", i + 1, letters[i]); 
	}

	return 0; 
}