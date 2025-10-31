#include <string.h>


int main(){
    double Nota1, Nota2, Nota_final;

    printf("digite a primeira nota: ");
    scanf("%lf", &Nota1);

    printf("digite a segunda nota: ");
    scanf("%lf", &Nota2);

    Nota_final = Nota1 + Nota2;

    if (Nota_final >= 60.00){
        printf("NOTA FINAL = %.1lf\n", Nota_final);
        printf("Aprovado");
    }
    else {
        printf("NOTA FINAL = %.1lf\n", Nota_final);
        printf("Reprovado");
    }








    return 0;
}
