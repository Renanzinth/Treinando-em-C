int acessosistema(void)
	{
		int perg[5];
		int certo = 0;
		int errado = 0;
			if(perg[0] == 'V' || perg[0] == 'v')
				certo++;
				else
					errado++;
			
			if(perg[1] == 'V' || perg[1] == 'v')
				errado++;
				else
					certo++;
					
			if(perg[2] == 'V' || perg[2] == 'v')
				certo++;
				else
					errado++;
			
			if(perg[3] == 'V' || perg[3] == 'v')
				certo++;
				else
					errado++;
			
			if(perg[4] == 'V' || perg[4] == 'v')
				errado++;
				else
					certo++;
					
			if(certo >= 3)
				{
					printf("Sistema liberado!\n\n");
				}
				else
				{
					printf("Sistema negado!\n\n");
				}
	}
