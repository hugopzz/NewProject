#include <stdio.h>

void main()
{
	int pixeles_ancho, pixeles_alto, Xizquierda, Yizquierda, Xderecha, Yderecha;
	float porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto;

	scanf_s("%i", &pixeles_ancho);
	scanf_s("%i", &pixeles_alto);
	scanf_s("%f", &porcentajeX);
	scanf_s("%f", &porcentajeY);
	scanf_s("%f", &porcentaje_ancho);
	scanf_s("%f", &porcentaje_alto);

	Xizquierda = porcentajeX * pixeles_ancho;
	Yizquierda = porcentajeY * pixeles_alto;
	Xderecha = pixeles_ancho * porcentaje_ancho + Xizquierda;
	Yderecha = pixeles_alto * porcentaje_alto + Yizquierda;

	printf_s("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", pixeles_ancho, pixeles_alto, porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto, Xizquierda, Yizquierda, Xderecha, Yderecha);
}

	