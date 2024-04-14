#include <stdio.h>
#include <locale.h>

void pnn (float n1);
int main()
{
	setlocale(LC_ALL, "portuguese");
	float a;
	
	printf("Digite um número: ");
		scanf("%f", &a);
		pnn (a);
	return (0);
	
}
void pnn (float n1) 
{
	if (n1 > 0) 
	{
		printf("Esse número é positivo");
	}
	else if (n1 < 0) {
		printf("Esse número é negativo");
	}
	else {
		printf("Esse número é neutro");
	}
	return 0;
}