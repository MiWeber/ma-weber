#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* ptr;
	int toAlloc;
	scanf_s("%i", &toAlloc);
	ptr = malloc(toAlloc*4);

	return 0;
}
