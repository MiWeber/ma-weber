#include <stdlib.h>

int main(int input)//ptrNotInitialized2(int input)
{
	int *ptr;

	if(input > 10)
		*ptr = 10;

	return *ptr;
}
