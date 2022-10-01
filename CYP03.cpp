#include <stdio.h>

int main() 
{
	int dia, mes, ano;
	
	scanf_s("%i %i %i", &dia, &mes, &ano);
	
	
	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0); if (mes > 0 && mes <= 12); if (ano > 0 && ano <= 3000); {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
			mes = 31;
			if (dia > 0 && dia < 31) {
				dia++;
				printf("%2d %2d %4d", dia, mes, ano);
			}
			else if (dia > 0 && dia <= 32);{
				if (dia == 32) {
					dia = 1;
					mes++;
					printf("%2d %2d %4d", dia, mes, ano);
				}
			}
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11); {
			mes = 30;
			if (dia == 31) {
				dia = 1;
				mes++;
				printf("%2d %2d %4d", dia, mes, ano);
			}
		}
	}

		if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0); if (mes > 0 && mes <= 12); if (ano > 0 && ano <= 3000); {
			if (dia == 29 && mes == 2) {
				dia = 1;
				mes++;
				printf("%2d %2d %4d", dia, mes, ano);
			}
			else
			{
				printf("% 2d % 2d %4d", dia, mes, ano);
			}
		
		
		}
		//Detectar la fecha especial de 1582
		if (dia == 5 && mes == 10 && ano == 1582) {
			dia = 15;
			printf("%2d %2d %4d", dia, mes, ano);
		}










	
	
	return 0;

}


