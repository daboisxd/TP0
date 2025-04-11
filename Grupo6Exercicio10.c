#include <stdio.h>


void remover_caractere(char *str, char c)
{
    int i = 0, j = 0;

    while (str[i])
        {
        if (str[i] != c)
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main()
{
    char texto[100];
    char caractere;

    printf("digite um texto: ");
    fgets(texto, sizeof(texto), stdin);


    int len = 0;
    while (texto[len]) {
        if (texto[len] == '\n')
        {
            texto[len] = '\0';
            break;
        }
        len++;
    }

    printf("digite um caractere para remover: ");
    scanf(" %c", &caractere);

    remover_caractere(texto, caractere);

    printf("string apos remocao: %s\n", texto);

    return 0;
}
