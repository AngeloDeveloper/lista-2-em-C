#include <stdio.h>
#include <stdlib.h>


int main()
{
    int lado, square=0;
    while (scanf("%d", &lado)!= EOF)
    {
        int i;
        for(i=1; i<=lado; i++)
        {
            square+= (i*i);
        }
        printf("%d", square);
    }
}
