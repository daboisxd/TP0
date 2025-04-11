#include <stdio.h>


void strcpy(char colar[], const char copiar[]) {
    int i = 0;
    while (copiar[i] != '\0') {
        colar[i] = copiar[i];
        i++;
    }
    colar[i] = '\0';
}

int main() {
    char copiar[100], colar[100];

    printf("digite algo para copiar: ");
    fgets(copiar, sizeof(copiar), stdin);


    int len = 0;
    while (copiar[len] != '\0') {
        if (copiar[len] == '\n') {
            copiar[len] = '\0';
            break;
        }
        len++;
    }

    strcpy(colar, copiar);

    printf("frase copiada: %s\n", colar);

    return 0;
}

