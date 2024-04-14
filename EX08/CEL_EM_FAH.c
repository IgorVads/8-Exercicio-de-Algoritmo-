#include <stdio.h>
#include <locale.h>

// Converter Celsius em Fahrenheit.

float c_f(float c);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float f, result;
	
	printf("Digite o valor que deseja converter (em celsius): ");
		scanf("%f", &f);
		
	result = c_f (f);
	
	printf("%f celsius em fahrenheit equivale a: %0.1f", f, result);
	
	return 0;
}

float c_f(float c) 
{
	return ((1.8*c) + 32);
}