#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float Calcula (float v1, float v2, char c);


int main()
{

    float valor1;
    float valor2;
    char letra;
    int condicao = 0;


    do{
        printf("- Para soma  digite +\n- Para subtracao digite -\n- Para divisao digite /\n- Para multiplicacao digite *\n Escolha:  ");
        scanf("%c",&letra);
        printf("\n");

        if(letra == '+' || letra == '-' || letra == '/' || letra == '*' ){
            condicao = 1;
        }
        else{
            printf("Valor invalido!!");
            printf("\n\n");
        }

    }while(condicao == 0);

    printf("Qual o valor do numero 1: ");
    scanf("%f", &valor1);
    printf("\n");

    printf("Qual o valor dos numero 2: ");
    scanf("%f", &valor2);
    printf("\n");


    Calcula(valor1, valor2, letra);


    return 0;
}

float Calcula (float v1, float v2, char c){

    if(c == '+'){

    float resultado = v1 + v2;
    printf("Resultado da soma e: %.2f", resultado);

    }
    else if(c == '-'){

    float resultado = v1 - v2;
    printf("Resultado da subtracao e: %.2f", resultado);

    }
    else if(c == '/'){

    float resultado = v1 / v2;
    printf("Resultado da divisao e: %.2f", resultado);

    }
    else if(c == '*'){

    float resultado = v1 * v2;
    printf("Resultado da multiplicacao e: %.2f", resultado);

    }

}
