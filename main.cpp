#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "epar.h"
#include "elevapot.h"
#include "tiraraiz.h"
#include "acessosistema.h"

int main()
	{
		
		printf("Bem vindo ao sistema\n\n\n\n");
		
		int i = 1;
		int num;
		int perg[5];
		
			printf("Yellow em ingles e amarelo (V/F)");
			scanf("%c", &perg[0]);  // V
			fflush(stdin);
			printf("4 + 4 = 20 (V/F)"); // F
			scanf("%c", &perg[1]);
			fflush(stdin);
			printf("2 x 1 = 2 (V/F)"); // V
			scanf("%c", &perg[2]);
			fflush(stdin);
			printf("8 + 2 = 10 (V/F)"); // V
			scanf("%c", &perg[3]);
			fflush(stdin);
			printf("1 + 0 = 5 (V/F)"); // F
			scanf("%c", &perg[4]);
			fflush(stdin);
			
		acessosistema();
		
	
		printf("Digite um numero:");
		scanf("%d", &num);
		if(Epar(num))
			{
				printf("O numero e par.\n");
				elevaPot(num);
				printf("\n");
				tiraRaiz(num);
				printf("\n");
			}
		else
		{
			printf("O numero nao e par.");
		}
	
		return 0;
	}
