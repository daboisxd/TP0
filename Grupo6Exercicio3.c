#include <stdio.h>
#include <string.h>


void normal(char *str, int i)
{
    if (str[i] == '\0') return;
    printf("%c", str[i]);
    normal(str, i + 1);
}


void invertida(char *str, int i)
{
    if (str[i] == '\0') return;
    invertida(str, i + 1);
    printf("%c", str[i]);
}

int main()
{
    char texto[200];

    printf("digite qualquer coisa para mostrar invertido:\n");
    fgets(texto, sizeof(texto), stdin);


    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n')
        {
        texto[len - 1] = '\0';
        }

    printf("\nfrase normal: ");
    normal(texto, 0);

    printf("\nfrase invertida: ");
    invertida(texto, 0);

    printf("\n");

    return 0;
}

