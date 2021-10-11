#include <stdio.h>						//bibliotéca padrão
#include <math.h>						//bibliotéca para operações matemáticas

int procdTri (int l)					//Procedimento do triângulo
{
	//VARIÁVEIS
	int			lG;
	int			i, j, h;
	//INÍCIO
   
    //Ponta
	for (j = l; j >= i; j--)
	{
		printf(" ");
	}
    printf("/\\ \n");
    
    //Corpo
	for (i = 1; i <= l; i++)
	{
		//Camada 1
		for (j = l; j >= i; j--)
		{
			printf(" ");
		}
		printf("/");
		
		//Espaço do meio e costas do triângulo
		h = i*2;
		for (j = 1; j <= h; j++)
		{
			printf(" ");
		}
		printf("\\");
		
		printf("\n");
	}
	
	//Floor
	lG = l*2+2;
	printf("+");
	for (j = 1; j <= lG; j++)
		{
			printf("-");
		}
	printf("+");
}

int main()								//Main
{
	//VARIÁVEIS
	int l;
	
	//INÍCIO
	printf("Informe a dimensão do triângulo\n");
	printf("Valor: ");
	scanf("%d", &l);
	
	procdTri (l);
	
	return 0;	
}
