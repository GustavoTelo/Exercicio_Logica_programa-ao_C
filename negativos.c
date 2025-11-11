#include <stdio.h>

int main(){

    int N, I, J, Negativos;
    printf("quantos numeros voce vai digitar?");
    scanf("%d", &N);

    int vet[N], Neg[N];

    for (I = 0; I < N; I++){
        printf("digite um numero: ");
        scanf("%d", &vet[I]);
    }


    printf("NUMEROS NEGATIVOS:\n");
    for (I = 0; I < N; I++){
        if (vet[I] < 0){
            printf("%d\n", vet[I]);
        }
    }




    return 0;

}
