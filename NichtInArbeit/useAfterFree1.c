#include <stdlib.h>

void main()//useAfterFree1()
{
	int *ptr;
	ptr = malloc(sizeof(int)*10);

	if(ptr)
		free(ptr);

	ptr[0] = 1;

	return;
}
