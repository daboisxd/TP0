#include <stdio.h>
#include <string.h>
#include <ctype.h>


int contar_palavras(char texto[])
{
    int i = 0, palavras = 0, dentro_palavra = 0;

    while (texto[i] != '\0')
        {
    if (!isspace(texto[i]))
        {
        if (dentro_palavra == 0)
            {
                palavras++;
                dentro_palavra = 1;
            }
    } else
        {
            dentro_palavra = 0;
        }
        i++;
    }

    return palavras;
}

int main()
{
    char frase[200];

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);


    if (frase[strlen(frase) - 1] == '\n')
        {
        frase[strlen(frase) - 1] = '\0';
    }

    int total = contar_palavras(frase);
    printf("\nquantidade de palavras: %d\n", total);

    return 0;
}

