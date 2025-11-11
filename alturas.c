#include <stdio.h>
#include <string.h>


int main()
{
    void limpar_entrada()
    {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }
    int i, n, nmenores;
    double soma, media, percentual_menores;

    printf("quantas pessoas serao digitadas: ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (i = 0; i < n; i++){
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nomes: ");
        limpar_entrada();
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura:");
        scanf("%lf", &alturas[i]);

    }

    soma = 0;
    for (i = 0; i < n; i++){
        soma = soma + alturas[i];
    }
    media = soma / n;
    printf("\nAltura media = %.2lf\n", media);

    nmenores = 0;
    for (i = 0; i < n; i++){
        if (idades[i] < 16){
            nmenores++;
        }
    }

    percentual_menores = nmenores * 100.0 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentual_menores);



         for (i = 0; i < n; i++){
        if (idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
     }








    return 0;

}
