#include <stdio.h>
#include <stdlib.h>


float CalculoCilindro (float h, float r);


int main()
{

    float altura;
    float raio;

    printf("Escolha um numero para a altura: ");
    scanf("%f", &altura);

    printf("Escolha um numero para o raio: ");
    scanf("%f", &raio);

    CalculoCilindro(altura, raio);


    return 0;
}


float CalculoCilindro (float h, float r){

float result1;
float resultfinal;
float raioquad = r * r;
result1 = 3.1414592 * raioquad;
resultfinal = result1 * h;
printf("\nO volume e: %.2f\n", resultfinal);

}
