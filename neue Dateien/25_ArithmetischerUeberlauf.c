#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int8_t i8 = 127;
	uint8_t u8 = 255;

	// printf("%i", sizeof(int)); --> Ausgabe: 4
	// int entspricht int32_t
	// dieser Datentyp kann als größte Zahl 2147483647 darstellen
	int i = 2147483647;
	printf("Ueberlauf int8_t\t%i\nUeberlauf uint8_t\t%i\nUeberlauf int\t\t%i\n", ++i8, ++u8, ++i);

	return 0;
}
