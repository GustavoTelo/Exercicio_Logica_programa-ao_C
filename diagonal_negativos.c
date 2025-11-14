#include <stdio.h>


int main()
{

    int i, j, n, negativos;

    printf("qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL: \n");

    for (i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }
    negativos = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (mat[i][j] < 0 ){
                negativos = negativos + 1;
            }
        }
    }

    printf("\nquantidades de negativos: %d", negativos);


    return 0;
}
