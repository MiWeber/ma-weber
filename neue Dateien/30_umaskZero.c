#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
        umask(0);
        FILE* out;

        out = fopen("hello.out", "w");
        if (out)
        {
                fprintf(out, "Hello, World!");
                fclose(out);
        }

        return 0;
}
