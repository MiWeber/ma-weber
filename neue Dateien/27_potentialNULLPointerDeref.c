#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

void doSomethingGreat(char* ptr, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        ptr[i] = 0;
    }
}

int main()
{
    char* ptr;
    ptr = malloc(ARRAY_SIZE * sizeof(char));

    doSomethingGreat(ptr, ARRAY_SIZE);

    return 0;
}
