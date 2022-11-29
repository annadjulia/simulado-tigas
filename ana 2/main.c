#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[31], string2[31];
    int i=0, tamanhoStr=0, j=0;

    printf("insira: ");
    fflush(stdin);
    scanf("%[^\n]",string);

    tamanhoStr=strlen(string);
    printf("%d",tamanhoStr);

    for(i=0,j=tamanhoStr-1;j>=0;i++,j--)
    {
        string2[i]=string[j];
    }

    printf("\n\ncerta: %s",string);
    printf("\n\ninversa: %s",string2);


    return 0;
}
