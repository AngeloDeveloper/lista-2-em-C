#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *ponteiro=(int*)malloc(sizeof(int));

    char binario[8];
    int i=0;
    ponteiro[0]=1;


    do{
        scanf("%i",&ponteiro[i]);
        i++;
        ponteiro=realloc(ponteiro,i+1);
    }while(ponteiro[i-1]!=0);

    int cont;

    for(cont=0; cont<i-1; cont++)
    {
        int contParity=0;

        itoa(ponteiro[cont],binario,2);

       //printf("o binario eh %s\n ",binario);
       int g=0;
       for(g=0;g<strlen(binario); g++)
       {
           if(binario[g]=='1')
           {
               contParity++;
           }
       }
       printf("This parity of %s is %d(mod 2)\n", binario ,contParity);
    }

}
