#include <stdlib.h>
#include <time.h>

void main()//memoryLeak2()
{
	srand(time(NULL));
	int *ptr;
	ptr = malloc(sizeof(int)*10);
	
	int rndm = rand();
	if(rndm%2 == 0)
		free(ptr);
	else
		// do some magic
	
	return;
}
