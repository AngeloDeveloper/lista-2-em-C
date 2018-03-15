#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char mensagem[100];
    int vInteiro=0;
    int cont=0;

    while(scanf("%s", mensagem)!= EOF)
    {
        for(int i=0;i <strlen(mensagem);i++)
        {
            if(mensagem[i]< 'A'||mensagem[i]>'Z')
            {
                vInteiro += (mensagem[i]-96);
            }
            else
            {
                vInteiro += (mensagem[i]-65+27);
            }
        }
        for(int i=2;i<vInteiro;i++)
        {
            if(vInteiro%i==0)
            {
                cont++;
            }
        }
    if(cont==0)
    {
        printf("It is a prime word\n");
    }
    else
    {
        printf("It is a not prime word\n");
    }

//printf("%d", vInteiro);
    }
}