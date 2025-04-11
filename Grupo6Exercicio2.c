#include <stdio.h>
#include <string.h>

int main() {
    char texto[201];
    printf("digite uma frase:\n");

    fgets(texto, sizeof(texto), stdin);


    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ')
        {
            printf("\n");
        } else if (texto[i] != '\n')
        {
            printf("%c", texto[i]);
        }
    }

    return 0;
}

