#include <stdio.h>

char *encontrar_espaco(char *str)
{
    while (*str)
    {
        if (*str == ' ')
        {
            return str;
        }
        str++;
    }
    return NULL;
}

int main()
{
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    char *espaco = encontrar_espaco(texto);

    if (espaco != NULL)
    {
        printf("espaco encontrado na posicao: %ld\n", espaco - texto);
    }
    else
    {
        printf("nenhum espaco encontrado.\n");
    }

    return 0;
}

