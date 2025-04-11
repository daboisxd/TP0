#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[80];
    int total = 0, pontuacao = 0, numeros = 0, minusculas = 0;

    printf("digite qualquer coisa com no maximo 80 caracteres:\n");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == '\n') continue;

        total++;

        if (ispunct(texto[i])) pontuacao++;
        if (isdigit(texto[i])) numeros++;
        if (islower(texto[i])) minusculas++;
    }

    printf("\ntotal de caracteres: %d", total);
    printf("\ncaracteres de pontuacao: %d", pontuacao);
    printf("\nnumeros: %d", numeros);
    printf("\nletras minusculas: %d\n", minusculas);

    return 0;
}

