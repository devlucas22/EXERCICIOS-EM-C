#include <stdio.h>

int main (void){

    float calculo, KMs, MSs;
    int opcao;

    while (1) {  // Loop infinito at� o usu�rio escolher sair
        printf("\nConvers�o de KM/h para m/s - Escolha 1\n");
        printf("Convers�o de m/s para KM/h - Escolha 2\n");
        printf("Escolha 3 para finalizar\n");
        printf("Op��o: ");
        scanf("%i", &opcao);

        switch(opcao){

        case 1 :

        printf("Digite os KMs:\n\n");
        scanf("%f" , &KMs);
        calculo = KMs / 3.6;
        printf("A conversao fica\n %.2f" , calculo);
        break;

        case 2 :

        printf("Digite os MSs:\n\n");
        scanf("%f" , &MSs);
        calculo = MSs * 3.6;
        printf("A conversao fica:\n %.2f" , calculo);
        break;

        case 3 :
        printf ("Programa finalizado!");
        return 0;

        default:
        printf("Op��o inv�lida! Tente novamente.\n");

        }


    }

 return 0;
}






