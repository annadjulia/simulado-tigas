#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[31];
    int i=0;

    printf("insira: ");
    fflush(stdin);
    scanf("%[^\n]",string);

    printf("\ncerta: %s",string);

    printf("\n\ninversa: ");

    for(i=strlen(string)-1; i>=0; i--)
    {
        printf("%c",string[i]);
    }

    printf("\n");

    return 0;
}
