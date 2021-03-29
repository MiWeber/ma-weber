#include <stdlib.h>

void doSomeMagic(int* ptr, int i)
{return;}
void doSomeOtherMagic(int i)
{return;}

void main(int i)//undef(int i)
{
    int* ptr;
    if(i<5)
    {
        ptr = malloc(sizeof(int));
        doSomeMagic(ptr, i);
    }
    else
    {
        doSomeOtherMagic(i);
    }
    free(ptr);
    return;
}
