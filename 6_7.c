// this program reads a single word into a character array and then prints the word backward. 
#include <stdio.h>
#include <string.h>
#define LIMIT 100
int main(void)
{
	char word[LIMIT];
	int counter; 

	for (counter = 1, printf("Please enter the word: "), scanf("%c", &word[0]); word[counter-1] != '\n';counter++)	
		scanf("%c", &word[counter]);
	for (int i = 0; i < counter - 1; i++)
	{
		printf("%c", word[counter-2-i]); 
	}
	printf("\n"); 

	printf("Enter another word: "); 
	scanf("%s", word); 
	for (int i = strlen(word)-1; i >= 0; i--)
		printf("%c", word[i]); 
	printf("\n");

	return 0;
}