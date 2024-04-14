#include <stdio.h>
#include <locale.h>

/*Faça uma função, com retorno, para calcular o valor do volume de uma caixa 
retangular, utilizando a seguinte fórmula:

Volume = comprimento × largura × altura

Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo 
usuário e devem ser passados como argumento para a função. A função main deve 
receber e exibir o resultado do cálculo.*/

float volume(float comp, float lar, float alt);

int main(int argc, char** argv)
{
	float c, l, a, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Para calcular o volume informe comprimento, largura e altura:\n\n");
	
	printf("Digite o comprimento: \n");
		scanf("%f", &c);
		
    printf("\nDigite a largura: \n");
    	scanf("%f", &l);
    	
 	printf("\nDigite a altura: \n");
 		scanf("%f", &a);

result = volume(c,l,a);		
		
     printf("Valor do volume: %.2f", result);
return 0;
}

float volume(float comp,float lar, float alt)
{
 	return (comp * lar * alt);
}