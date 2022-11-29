#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    float temps[TAMANHO], maiorTemp=0.0, menorTemp=0.0, media=0.0;
    int i;

    for(i=0;i<TAMANHO;i++)
    {
        printf("insira temperatura %d: ", i+1);
        fflush(stdin);
        scanf("%f",&temps[i]);

        media+=temps[i];

        if(temps[i]>30)
        {
            printf("\nalerta de temperatura elevada!\n");
        }
        if(i==0)
        {
            menorTemp=temps[i];
            maiorTemp=temps[i];
        }else if(temps[i]>maiorTemp)
        {
            maiorTemp=temps[i];
        }else if(temps[i]<menorTemp)
        {
            menorTemp=temps[i];
        }
    }

    printf("\nmaior temperatura: %.2f", maiorTemp);
    printf("\nmenor temperatura: %.2f", menorTemp);
    printf("\nmedia de temperaturas: %.2f", media/TAMANHO);

    return 0;
}
