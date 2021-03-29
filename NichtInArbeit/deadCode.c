#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void foo();
void deadCode(bool x);

void main()
{
	deadCode(true);
}

void deadCode(bool x)
{
	if (x)
	{
		for(int i = 0; i < 10; i++)
		{
			printf("Nummer %d\n", i);
			foo();
		}
		if(!x)
		{
			int fool=42;
			printf("You ain't gonna see mee ;)");
			foo();
			// do some magic... or better don't
		}
	}
	
	return;
}

void foo()
{
	static int i = 1;
	printf("Call subfunction %d. time\n", i++);
	return;
}
