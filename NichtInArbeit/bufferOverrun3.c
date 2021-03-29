#include <stdlib.h>

void main()//bufferOverrun3()
{
	int buf[10];
	int *ptr;

	ptr = buf;

	for(int i=0; i<=10; i++)
		*ptr++ = 0;

	return;
}
