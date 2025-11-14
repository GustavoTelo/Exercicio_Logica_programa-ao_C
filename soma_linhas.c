#include <stdio.h>

int main(){

    int i, j, n, m;

    printf("qual a quantidade de linhas da matriz?");
    scanf("%d", &n);
    printf("qual a quantidade de colunas na matriz");
    scanf("%d", &m);

    double mat[n][m], vet[m];


    for (int i = 0; i < n; i++){
        printf("digite os elementos da %da. linha: \n", i+1);
        for (int j = 0; j < m; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        vet[i] = 0;
        for (j = 0; j < m; j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }



    printf("VETOR GERADO\n");
    for (int i = 0; i < n; i++){
        printf("%.1lf\n", vet[i]);

    }








    return 0;
}
