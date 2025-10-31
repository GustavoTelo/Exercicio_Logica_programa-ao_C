#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double Largura, Comprimento, Valor, Area, Preco;
//leitura dos dados
//medida da largura, uma casa decimal
    printf("Digite a largura do terreno: ");
    scanf("%lf", &Largura);
//comprimento do terreno, uma casa decimal

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &Comprimento);

//valor do metro quadrado do terreno, duas casas decimais

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &Valor);


//programa rodando
    Area = (Largura * Comprimento);
    Preco = (Area * Valor);
//mostrar o valor da area do terreno, duas casas decimais
    printf("Area do terreno = %.2lf\n", Area);
    printf("Preco do terreno = %.2lf", Preco);


//mostrar o valor do preço do terreno, duas casas decimais
    return 0;
}
