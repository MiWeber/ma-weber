#include <stdlib.h>

void doSomeMagic(int *ptr){return;}
void doSomeOtherMagic(int *ptr){return;}

void main()//pointersAreDifficult()
{
    int *ptr;
    if(ptr = malloc(sizeof(int)))
    {
        doSomeMagic(ptr);
        free(ptr);
        doSomeOtherMagic(ptr);
    }
    return;
}
