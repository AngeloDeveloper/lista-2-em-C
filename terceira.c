#include <stdio.h>
#include <stdlib.h>

int main()
{

    //HORAS E MINUTOS 1
    int H1,M1;
    // HORAS E MINUTOS 2
    int H2,M2;
    int Ht,Mt;

    scanf("%i %i %i %i",&H1, &M1,&H2,&M2);

    if(H1!=H2)
    {
        Ht= H2-H1;
        Mt= M2-M1;

        if(Ht<0)
        {
            Ht= Ht+23;
        }
        if(Mt<0)
        {
            Mt= Mt+60;
        }
        if(H1)
        printf("%i ",(Ht*60)+Mt);
    }
    else
    {
        if(H1==H2 && M2<M1)
        {
            Mt= (M2-M1)+60;
            printf("%i\n",1380+Mt);
        }
        else
        {
           printf("%i", M2-M1);
        }
    }
}
