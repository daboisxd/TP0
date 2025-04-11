#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Contato
{

    char nome[100];
    char endereco[100];
    char fone[10];
    long int cep;

};

int main()
{

    char escolha = '0', letra;
    int i = 0, j;
    struct Contato Lista[100];

    while(escolha != '4')
    {

        printf("**** Bem vindo a lista telefonica ****\n");
        printf("Selecione a opção desejada: \n1 - inserir nome na lista \n2 - verificar os dados de um nome cadastrado \n3 - Lista de nomes com a inicial escolhida \n4 - fim.\n");
        scanf(" %c", &escolha);

        switch (escolha)
        {
        case '1':
            getchar();
            printf("Adicione um nome à lista: ");
            fgets(Lista[i].nome, sizeof(Lista[i].nome), stdin);
            Lista[i].nome[strcspn(Lista[i].nome, "\n")] = '\0';

            printf("Digite o endereço: ");
            fgets(Lista[i].endereco, sizeof(Lista[i].endereco), stdin);
            Lista[i].endereco[strcspn(Lista[i].endereco, "\n")] = '\0';

            printf("Insira o telefone: ");
            fgets(Lista[i].fone, sizeof(Lista[i].fone), stdin);
            Lista[i].fone[strcspn(Lista[i].fone, "\n")] = '\0';

            printf("Insira o CEP: ");
            scanf("%ld", &Lista[i].cep);
            getchar();

            Lista[i].nome[0] = toupper(Lista[i].nome[0]);
            i++;

            break;
        case '2':
            printf("A lista possui %d registros. Qual deseja acessar? ", i);
            scanf("%d", &j);

            if(j < 1 || j > i)
            {
                printf("Este registro não existe!");
            }
            else
            {
                printf("Nome: %s\n", Lista[j-1].nome);
                printf("Endereço: %s\n", Lista[j-1].endereco);
                printf("Telefone: %s\n", Lista[j-1].fone);
                printf("CEP: %ld\n", Lista[j-1].cep);
            }
            break;
        case '3':
            printf("Escolha uma letra para a busca: \n");
            scanf(" %c", &letra);

            letra = toupper(letra);

            for(int x = 0; x < i; x++)
            {
                if(letra == Lista[x].nome[0])
                {
                    printf("%s\n", Lista[x].nome);
                }
            }
            break;
        case '4':
            break;
        default:
            printf("Selecione uma opção valida!");
            break;
        }
    }
}
