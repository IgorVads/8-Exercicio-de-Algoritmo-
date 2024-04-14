#include <stdio.h>
#include <locale.h>

/* Uma função, sem retorno, que recebe um valor inteiro por parâmetro e 
informa se ele é, ou não, múltiplo de 5 */

void mult_five(int five);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int fi;
	
	printf("Digite um número para descobrir se é multiplo de 5: ");
		scanf("%f", &fi);
		
		mult_five(fi);
		
	return 0;
}

void mult_five(int five) 
{
	if (five % 5 == 0) 
	{
	printf("Esse numero é multiplo de 5!");	
	}
	else
	{
		printf("Esse número não é multiplo de 5!");		
	}
	return 0;
}