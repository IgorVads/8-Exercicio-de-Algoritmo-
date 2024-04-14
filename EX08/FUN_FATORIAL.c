#include <stdio.h>
#include <locale.h>

//Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero 
//por parâmetro e retorna o fatorial de tal número

int ig_ze(int igze);

int main()
{
	float nf, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número para descobrir o fatorial:" );
		scanf("%f", &nf);
		
		if (nf <= 0) 
		{
      printf("\n---------------------------------------\n");
	  printf("\nNão existe fatorial de número negativo!\n");
	  printf("\n---------------------------------------\n");	
	   } 
	   else
	   {	
    result = ig_ze(nf);
 	
 	printf("\n---------------------------------------\n");
 	printf(" O fatorial de %.0f é %.0f                  |", nf, result);
 	printf("\n---------------------------------------\n");
	return 0;   
	   }				
}
int ig_ze(int igze) 
{
	int i;
	float fatorial = 1;

		for (i = 1; i <= igze; i++) 
		{
		fatorial = fatorial * i;	
		}
		
return fatorial;
}