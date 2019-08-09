// this program uses nested loops to produce the following pattern
/* 
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
#include <stdio.h>
#define ROW 6
int main(void)
{
	int index = 0; 
	for (int row = 0; row < ROW; row++)
	{	
		for (int col = 0; col < row + 1; col++, index++) 
			printf("%c", 'A' + index); 
		printf("\n"); 
	}

	return 0;
}