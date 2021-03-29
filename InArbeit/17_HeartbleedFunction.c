#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(int length, char *buffer)//heartbleed(int length, char* buffer)
{
        uint8_t* outputBuffer;
        outputBuffer = (uint8_t *) malloc(length);
        if(outputBuffer != NULL)
        {
                memcpy(outputBuffer, buffer, length);
                //sendData(outputBuffer);
                free(outputBuffer);
        }

        return 0;
}
