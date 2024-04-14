#include <stdio.h>
#include <locale.h>

/* Uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
e informa se ele é maior de idade ou não*/

void idade(int id);

int main(int argc, char** argv)
{
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual a sua idade? ");
		scanf("%i", &i);
		
    idade(i);
	return 0;
}

void idade(int id) 
{
if (id >= 18) 
{
	printf("VOCÊ É MAIOR DE IDADE!");	
}	
else
{
	printf("VOCÊ AINDA NÃO É MAIOR DE IDADE!");
}
return 0;
}
