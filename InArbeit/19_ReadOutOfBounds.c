#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(int argc, char* argv[])
{
	int selectedEntry;

	// Load Database:
	//char* db[] /* = loadDb() */;
	int numberOfEntries = argc;
	printf("Select one of %i product(s): ", numberOfEntries);
	scanf("%i", &selectedEntry); //hier eigentlich scanf_s; aber diese Fkt ist scheinbar nur unter windows bekannt...
	printf("You selected: %i\n", selectedEntry);

	printf("%s\n", argv[selectedEntry]);
	//getEntry(selectedEntry);

	return 0;
}
