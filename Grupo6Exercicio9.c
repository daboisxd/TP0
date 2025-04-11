#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_NOMES 20
#define TAM 100

int compara_prenome(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}


int compara_sobrenome(const void *a, const void *b)
{
    char *nome1 = *(char **)a;
    char *nome2 = *(char **)b;


    char *sobrenome1 = strchr(nome1, ' ');
    char *sobrenome2 = strchr(nome2, ' ');

    if (sobrenome1 && sobrenome2)
        return strcmp(sobrenome1 + 1, sobrenome2 + 1);
    else
        return 0;
}

int main() {
    char nomes[MAX_NOMES][TAM];
    char *por_sobrenome[MAX_NOMES];
    int count = 0;
    int total_letras = 0;

    printf("digite ate 20 nomes com sobrenome digite FIM para encerrar.\n");

    while (count < MAX_NOMES)
        {
        printf("Nome %d: ", count + 1);
        fgets(nomes[count], TAM, stdin);


        nomes[count][strcspn(nomes[count], "\n")] = '\0';


        if (strstr(nomes[count], "FIM") != NULL)
        {
            break;
        }


        for (int i = 0; nomes[count][i]; i++)
            {
            if (nomes[count][i] != ' ')
                total_letras++;
        }

        por_sobrenome[count] = nomes[count];
        count++;
    }


    qsort(nomes, count, sizeof(nomes[0]), compara_prenome);

    printf("\nnomes ordenados por pre-nome: \n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", nomes[i]);
    }


    qsort(por_sobrenome, count, sizeof(char *), compara_sobrenome);

    printf("\nnomes ordenados por sobrenome: \n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", por_sobrenome[i]);
    }


    float media = (count > 0) ? (float)total_letras / count : 0;
    printf("\nmedia de letras por nome: %.2f\n", media);

    return 0;
}

