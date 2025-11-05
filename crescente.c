#include <stdio.h>


int main(){

    int X, Y;

    printf("digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    while(X != Y){
        if(X < Y){
            printf("CRESCENTE!!!\n");
        }
        else {
            printf("DECRESCENTE!!!\n");
        }
        printf("Digite outro dois numeros:\n");
        scanf("%d", &X);
        scanf("%d", &Y);
    }





    return 0;

}
