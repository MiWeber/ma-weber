#include <stdlib.h>

void main()//useAfterFree2()
{
	int *ptr1;
	int *ptr2;
	ptr1 = malloc(sizeof(int)*10);

	if(ptr1)
	{
		ptr2 = ptr1;
		free(ptr1);
		ptr2[0] = 1;
	}

	return;
}
