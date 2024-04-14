#include <stdio.h>
#include <locale.h>

float notas(float n1, float n2, float n3);
void conceito(float nota);

int main(int argc, char** argv)
{
	float nt1, nt2, nt3, result;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Nota 1:");
		scanf("%f",&nt1);
		
    printf("Nota 2:");
    	scanf("%f",&nt2);
    	
 	printf("Nota 3:");
 		scanf("%f",&nt3);
 		
    result = notas(nt1,nt2,nt3);
 		

    printf("\nA sua média final foi de: %.0f\n", result);
    conceito(result);
	return 0;
	
}
float notas(float n1, float n2, float n3)
{
	return ((n1+n2+n3)/3);
}

void conceito(float nota)
{
	if (nota >= 9) 
	{
	printf("\nVocê tirou uma nota A\n");	
	} 
	else if (nota >= 7 && nota <9) 
	{
	printf("\nVocê tirou uma nota B\n");	
	} else if (nota >= 6 && nota <7) 
	{
      printf("\nVocê tirou uma nota C\n");
	} else if (nota >= 4 && nota <6) 
	{
	printf("\nVocê tirou uma nota D\n");	
	} else
	{
      printf("\nVocê tirou uma nota E\n");
	}
}
