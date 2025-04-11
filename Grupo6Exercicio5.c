#include <stdio.h>
#include <string.h>


int verifica()
{
    char resposta[10];

    while (1)
        {
        printf("Digite 'SIM' ou 'NAO': ");
        fgets(resposta, sizeof(resposta), stdin);


        if (resposta[strlen(resposta) - 1] == '\n')
        {
            resposta[strlen(resposta) - 1] = '\0';
        }

        if (strcmp(resposta, "SIM") == 0)
        {
            return 1;
        } else if (strcmp(resposta, "NAO") == 0)
        {
            return 0;
        } else {
            printf("digite apenas SIM ou NAO\n");
        }
        }
}

int main()
{
    int resultado = verifica();
    printf("\nretorno: %d\n", resultado);
    return 0;
}

