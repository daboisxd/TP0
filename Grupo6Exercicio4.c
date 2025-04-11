#include <stdio.h>

int main()
{
    char nome[100], endereco[100], telefone[30];
    int idade;

    printf("digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("digite seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("digite seu tefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (nome[strlen(nome) - 1] == '\n')
    {
    nome[strlen(nome) - 1] = '\0';
    }
    if (endereco[strlen(endereco) - 1] == '\n')
    {
        endereco[strlen(endereco) - 1] = '\0';
    }
    if (telefone[strlen(telefone) - 1] == '\n')
    {
        telefone[strlen(telefone) - 1] = '\0';
    }


    printf("\nseu nome e %s, voce tem %d anos, mora na rua %s e seu telefone e %s.\n",nome, idade, endereco, telefone);

    return 0;
}

