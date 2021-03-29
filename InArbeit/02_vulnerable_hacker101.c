#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void read_all_stdin(long param_1);

int main(void)
{
  char pw_input [32];

  memset(pw_input,0,0x20);
  read_all_stdin(pw_input);
  if (pw_input[0] == '\0')
  {
    puts("What is your name?");
  }
  else
  {
    printf("Hello %s!\n",pw_input);
  }
  return 0;
}

void read_all_stdin(long param_1)
{
  int iVar1;
  int local_c;

  local_c = 0;
  while( true )
  {
    iVar1 = fgetc(stdin);
    if (iVar1 == -1) break;
    *(char *)(param_1 + local_c) = (char)iVar1;
    local_c = local_c + 1;
  }
  return;
}
