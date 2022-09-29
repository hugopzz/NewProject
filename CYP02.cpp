#include <stdio.h>
#include <string.h>

void main()
{
	int tamanoarchivo, posicion_pixel, a1 = 0000, a2 = 0000;
	char cad1[5];
	strcpy_s(cad1, 4, "BM");

	scanf_s("%i", &tamanoarchivo);
	scanf_s("%i", &posicion_pixel);

	printf("%s%08X%04i%04i%08X", cad1, tamanoarchivo, a1, a2, posicion_pixel);

}