#include <stdio.h>

void main()//bufferOverrun2()
{
	int buf[10];
	int *ptr;

	ptr = buf;

	for(int i=0; i<=10; i++)
		ptr[i]=0;

	return;
}
