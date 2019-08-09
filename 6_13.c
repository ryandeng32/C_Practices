// this programs creates an eight-element array of ints and sets the 
// elements to the first eight powers of 2 and then prints the value
// it must use a for loop to set the values, and use do while loop to display them
#include <stdio.h>
#include <math.h>
int main(void)
{
	int list[8]; 
	int value = 2; 
	for (int i = 1; i <= 8; i++, value *= 2)
	{
		list[i-1] = value; 
	}

	int counter = 0; 
	do
	{
		printf("%d\t", list[counter]); 
		counter++; 
	} while (counter < 8); 
	printf("\n");

	return 0;
}