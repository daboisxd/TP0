
#include <stdio.h>
#include <string.h>

void inserir_caractere(char *str, char c, int pos)
{
    int len = strlen(str);

    if (pos < 0 || pos > len)
    {
        printf("local invalido.\n");
        return;
    }

    for (int i = len; i >= pos; i--)
    {
        str[i + 1] = str[i];
    }

    str[pos] = c;
}

int main()
{
    char texto[100] = "algoritmoteste";
    char caractere;
    int pos;

    printf("string original: %s\n", texto);

    printf("digite o caractere para inserir: ");
    scanf(" %c", &caractere);

    printf("digite o lugar para inserir: ");
    scanf("%d", &pos);

    inserir_caractere(texto, caractere, pos);

    printf("string modificada: %s\n", texto);

    return 0;
}
