// this program reads input until # is entered and then reports the number of 
// space rad the number of newline characters read, and the number of other characters read
#include <stdio.h>
int main(void)
{
	char ch; 
	int ns, nn, no; 
	ns = nn = no = 0; 
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			ns++; 
		else if (ch == '\n')
			nn++; 
		else
			no++; 
	}
	printf("You entered %d spaces, %d newline characters, and %d other characters\n", 
		ns, nn, no); 

	return 0; 
}