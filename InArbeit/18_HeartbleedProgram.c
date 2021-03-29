// Programm ist jetzt obsolet...

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int heartbleed(int length, char* buffer)
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

int main()
{
    heartbleed(10, "bla");

    return 0;
}
