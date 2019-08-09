// this program uses nested loop to produce the following pattern
/* 
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

#include <stdio.h>
#define ROW 6
int main(void)
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < row + 1; col++)
			printf("%c", 'A' + ROW - 1 - col); 
		printf("\n"); 
	}
	
	return 0;
}