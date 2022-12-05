#include <stdio.h>
#include <stdlib.h>
#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA], i=0, j=0, opcao=0, colunas[COLUNA] = {0}, linhas[LINHA] = {0};

    for(i=0;i<LINHA;i++)
    {
        for(j=0;j<COLUNA;j++)
        {
            printf("insira numero %d%d: ",i,j);
            fflush(stdin);
            scanf("%d",&matriz[i][j]);

            linhas[i]+=matriz[i][j];
            colunas[j]+=matriz[i][j];
        }
    }

    printf("\ninsira 1 para somar as colunas ou 2 para somar as linhas: ");
    fflush(stdin);
    scanf("%d",&opcao);

    printf("\nmatriz: \n");
    for(i=0;i<LINHA;i++)
    {
        for(j=0;j<COLUNA;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }


    switch(opcao)
    {
        case 1: printf("\nsoma das colunas: ");
                for(i=0;i<COLUNA;i++)
                {
                    printf("%d ",colunas[i]);
                }
                break;
        case 2: printf("\nsoma das linhas: ");
                for(i=0;i<LINHA;i++)
                {
                    printf("%d ",linhas[i]);
                }
                break;
        default: printf("\nopcao invalida!!!");
    }


    return 0;
}
