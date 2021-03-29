#include <stdlib.h>

void main()//memoryLeak1()
{
    int *ptr;
    ptr = malloc(sizeof(int));
    
    return;
}
