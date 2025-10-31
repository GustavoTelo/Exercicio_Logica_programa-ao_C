#include <string.h>
#include <math.h>

int main(){
    double Base, Altura, Area, Perimetro, Diagonal;
//LEITURA DOS DADOS
//base
    printf("Base do retangulo: ");
    scanf("%lf", &Base);
//altura
    printf("Altura do retangulo: ");
    scanf("%lf", &Altura);


//MOSTRAR OS VALORES, com 4 casas decimais
//area
    Area = Base * Altura;
//perimetro
    Perimetro = 2 * (Base + Altura);
//diagonal
    Diagonal = sqrt(pow(Base, 2) + pow(Altura, 2));


    printf("Area = %.4lf\n", Area);
    printf("Perimetro = %.4lf\n", Perimetro);
    printf("Diagonal = %.4lf\n", Diagonal);



    return 0;
}
