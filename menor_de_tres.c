#include <stdio.h>


int main(){

    int n1, n2, n3;

    printf("primeiro valor: ");
    scanf("%d", &n1);
    printf("segundo valor: ");
    scanf("%d", &n2);
    printf("terceiro valor: ");
    scanf("%d", &n3);

    if(n1 < n2 && n1 < n3){
            printf("MENOR = %d", n1);
    }
    else if (n2 < n3){
        printf("MENOR = %d", n2);
    }
    else {
        printf("MENOR = %d", n3);
    }






    return 0;
}
