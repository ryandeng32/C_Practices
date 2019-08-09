// this program uses neste loops to produce the following pattern 
/* 
$
$$
$$$
$$$$
$$$$$
*/

#include <stdio.h>
#define ROW 5
int main(void)
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < row + 1; col++)
			printf("$"); 
		printf("\n"); 
	}

	return 0;
}