#include <stdio.h>
#include <locale.h>

/*Uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e 
informa se tal número é par ou ímpar.*/

void pa_im(int paim);

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Digite um número: ");
		scanf("%i", &n);
		
    pa_im (n);
    
	return 0;
}
void pa_im(int paim)
{
	if (paim % 2 == 0) 
	{
	printf("Esse número é par!");	
	}
	else
	{
		printf("Esse número é impar!");
	}
}