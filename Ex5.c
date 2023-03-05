#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float Media (float n1, float n2, float n3, char c);


int main()
{

    float nota1;
    float nota2;
    float nota3;
    char letra;


    printf("- Para media ponderada digite p\n- Para media aritmetica a\n letra:  ");
    scanf("%c",&letra);
    printf("\n");

    printf("Qual o valor da nota 1: ");
    scanf("%f", &nota1);
    printf("\n");

    printf("Qual o valor dos nota 2: ");
    scanf("%f", &nota2);
    printf("\n");

    printf("Qual o valor dos nota 3: ");
    scanf("%f", &nota3);
    printf("\n");



    Media(nota1, nota2, nota3, letra);


    return 0;
}


float Media (float n1, float n2, float n3, char c){

    if(c == 'p'){

    float nota1 = n1 * 0.5;
    float nota2 = n2 * 0.3;
    float nota3 = n3 * 0.2;
    float resultfinal = nota1 + nota2 + nota3;
    printf("\nA media e: %.2f\n", resultfinal);

    }
    else if(c == 'a'){

    float soma;
    soma = (n1 + n2 + n3);
    float resultfinal = soma/3;
    printf("\nA media e: %.2f\n", resultfinal);

    }



}
