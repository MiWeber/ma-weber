#include <stdio.h>
#include <string.h>

void main()//taintedFunction()
{
    char text1[20];
    char text2[20];
    printf("Please enter a text with max. 19 chars:\n");
    scanf("%19s", text1);
    (void)strncpy(text2, text1, sizeof(text1));
    printf(text2);
    return;
}
