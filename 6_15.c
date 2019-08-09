// this program reads a line of input and then prints the line in reverse order

#include <stdio.h>
#define MAX_CHAR 255

int main(void)
{	
	// char input[MAX_CHAR];
	// printf("Enter a line and I will display the line backwards\n"); 
	// int counter = 0; 
	// do
	// {
	// 	scanf("%c", &input[counter]);
	// 	counter++;  
	// }	
	// while (input[counter-1] != '\n'); 

	// for (int i = counter-2; i >= 0; i--)
	// {
	// 	printf("%c", input[i]); 
	// }
	// printf("\n");

	// return 0;
	char input[MAX_CHAR];
	printf("Enter a line and I will display the line backwards\n"); 
	int counter = 0; 
	for (scanf("%c", &input[counter]), counter = 1; input[counter-1] != '\n'; counter++)
	{
		scanf("%c", &input[counter]); 
	}
	for (int i = counter - 2; i >= 0; i--)
	{
		printf("%c", input[i]); 
	}
	printf("\n"); 
	
	return 0;
}