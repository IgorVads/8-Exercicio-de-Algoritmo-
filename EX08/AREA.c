#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14159

/*Elabore uma função, com retorno, que calcula a área de uma circunferência. Para 
isto, utilize a seguinte fórmula: A = piR^2

Obs.: o valor do raio deve ser fornecido pelo usuário e deve ser passado como 
argumento para a função. A função main deve receber e exibir o resultado do 
cálculo.*/

float area(float raio);

int main()
{
	float r, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual o valor do raio? ");
		scanf("%f", &r);
		
	result = area(r);	
		
	printf("A área do seu raio é de: %.2f", result);
	
	return 0;
	
}
float area(float raio) 
{
	return (pi * pow (raio,2));
}
