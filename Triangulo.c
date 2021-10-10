#include <stdio.h>						//bibliot�ca padr�o
#include <math.h>						//bibliot�ca para opera��es matem�ticas

int procdTri (int l)					//Procedimento do tri�ngulo
{
	//VARI�VEIS
	int			lG;
	int			i, j, h;
	//IN�CIO
   
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
		
		//Espa�o do meio e costas do tri�ngulo
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
	//VARI�VEIS
	int l;
	
	//IN�CIO
	printf("Informe a dimens�o do tri�ngulo\n");
	printf("Valor: ");
	scanf("%d", &l);
	
	procdTri (l);
	
	return 0;	
}

