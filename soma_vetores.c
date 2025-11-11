#include <stdio.h>


int main(){

    int n, i;
    double soma, valores, media;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    printf("VALORES = ");
    for (i = 0; i < n; i++){
        printf(" %.1lf", vet[i]);
    }

    printf("\nSOMA = %.2lf", soma);

    media = soma / n;

    printf("\nMEDIA = %.2lf", media);










    return 0;
}
