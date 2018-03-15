#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char palavra[30];

	int vet[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	int tamanho;

	while(scanf("%s",palavra) != EOF)
	{
		tamanho=strlen(palavra);

		for (int i = 0; i <tamanho; i++)
		{
			if (palavra[i]<65 || palavra[i]> 97 ) 
			{
					printf("%c",palavra[i] );
			}
			else
			{
				printf("%d",vet[(int)palavra[i]-65]);
			}

		}
			printf("\n");

	}

}