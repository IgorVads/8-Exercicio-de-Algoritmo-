#include <stdio.h>
#include <locale.h>

/*Uma função, sem retorno, que recebe um valor inteiro por parâmetro e 
informa se é, ou não, igual a zero.*/

void zero(int ze);

int main(int argc, char** argv)
{
	int z;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
		scanf("%i",&z);
	
	zero(z);
	
	return 0;
}
void zero(int ze)
{
	if 	(ze != 0) 
	{
		printf("Esse número não é igual a zero");	
	}
	else
	{
		printf("Esse número é igual a zero");
	}
	return 0;
}