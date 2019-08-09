#include <stdio.h>
int main(void)
{
	int first_array[8]; 
	for (int i = 0; i < 8; i++)
	{
		printf("Enter the value of element #%d: ", i+1); 
		scanf("%d", &first_array[i]); 
	}

	int second_array[8]; 
	int total; 
	int counter; 
	for (counter = 1, second_array[0] = first_array[0]; counter < 8; counter++)
	{
		second_array[counter] = first_array[counter] + second_array[counter - 1]; 
	}
/* using nested loop
	for (int i = 0; i < 8; i++)
	{	
		total = 0; 
		for (int j = 0; j < i + 1; j++)
		{	
			total += first_array[j]; 
		}
		second_array[i] = total; 
	}
*/
	for (int i = 0; i < 8; i++)
	{
		printf("%d\t", second_array[i]); 
	}
	printf("\n"); 
	return 0; 
}