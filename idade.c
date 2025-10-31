#include <string.h>
#include <stdio.h>

int main()
{

    void limpar_entrada()
    {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }


    char Nome[50], Nome2[50];
    int Idade, Idade2;
    double Media;
// LEITURA DE DADOS
//NOME
    printf("DADOS DA PRIMEIRA PESSOA:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(Nome);

//IDADE
    printf("Idade: ");
    scanf("%d", &Idade);

    printf("\nDADOS DA SEGUNDA PESSOA:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(Nome2);

//IDADE
    printf("Idade: ");
    scanf("%d", &Idade2);

    Media = (double)(Idade + Idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos.", Nome, Nome2, Media);




//MOSTRAR MENSAGEM COM NOME E IDADE MEDIA ENTRE AS DUAS PESSOAS, COM UMA CASA DECIMAL.






    return 0;
}
