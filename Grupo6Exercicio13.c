#include <stdio.h>
#include <string.h>
#include <math.h>

int conv2dec(char *num_str, int base)
{
    int len = strlen(num_str);
    int resultado = 0;

    for (int i = 0; i < len; i++)
    {
        char digito = num_str[i];

        int valor;

        if (digito >= '0' && digito <= '9')
            valor = digito - '0';
        else if (digito >= 'A' && digito <= 'F')
            valor = digito - 'A' + 10;
        else if (digito >= 'a' && digito <= 'f')
            valor = digito - 'a' + 10;
        else
            return -1;

        if (valor >= base)
            return -1;

        resultado = resultado * base + valor;
    }

    return resultado;
}

int main()
{
    char numero[20];
    int base;

    printf("Digite o número: ");
    scanf("%s", numero);

    printf("Digite a base: ");
    scanf("%d", &base);

    int decimal = conv2dec(numero, base);
    printf("decimal: %d\n", decimal);

    return 0;
}

