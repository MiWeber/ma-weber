#include <stdlib.h>

void doSomeMagic(int *ptr)
{return;}

int main(int argc, char *argv[])
{
    int result = 0;
    int *ptr;
    
    if(argc > 1)
    {
        ptr = malloc(sizeof(int));
        doSomeMagic(ptr);
        result = 1;
    }
    free(ptr);
}
