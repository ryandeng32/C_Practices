// this program reads eight integers and prints them in reverse order
#include <stdio.h>
int main(void)
{	
	printf("Enter 8 integers please: "); 
	int list_int[8]; 
	for (int i = 0; i < 8; i++)
		scanf("%d", &list_int[i]); 	

	for (int i = 7; i >= 0; i--)
		printf("%d\t", list_int[i]);
	printf("\n");
	
	return 0;
	
}