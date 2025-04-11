#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void soletrar(int numero)
{
    char extenso[10][10] =
     {
        "zero", "um", "dois", "tres", "quatro",
        "cinco", "seis", "sete", "oito", "nove"};

    char str[20];
    sprintf(str, "%d", numero);

    for (int i = 0; i < strlen(str); i++)
    {
        int digito = str[i] - '0';
        printf("%s", extenso[digito]);
        if (i < strlen(str) - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
 {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("numero negativo.\n");
    } else
    {
        printf("soletrando: ");
        soletrar(numero);
    }

    return 0;
}

