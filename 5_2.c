// this program asks for an integer and then prints all the integers
// from (and inluding) that value up to (and including) a value larger by 10

#include <stdio.h>
int main(void)
{
	int num;  
	printf("Enter a number: "); 
	scanf("%d", &num);
	int final = num + 10; 	
	num--; 
	while (num++ < final)
	{
		printf("%d\t", num); 
	} 
	printf("\n"); 
	
	return 0; 
}


