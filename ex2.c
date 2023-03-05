#include <stdio.h>
#include <stdlib.h>

int DiasMes (int valor);


int main()
{

    int mes;
    int correto = 0;
    do{
        printf("Escolha um número entre 1 e 12: ");
        scanf("%d", &mes);

        if(mes >= 1 && mes <= 12){
            correto = 1;
            DiasMes(mes);
        }
    }while(correto == 0);
    return 0;
}


int DiasMes (int valor){

    if(valor == 1 || valor == 3 || valor == 5 || valor == 7 || valor == 8 || valor == 10 || valor == 12){

        printf("Saida = 31 dias");
        printf("\n");
    }
    else if(valor == 2){
        printf("Saida = 28 dias");
        printf("\n");
    }
    else{
        printf("Saida = 30 dias");
        printf("\n");
    }



}
