//fa�a um algoritmo que preencha uma matriz
//3x5 com numeros inteiros , calcule e mostre
//a quantidade de elementos entre 15 e 20

#include <stdio.h>
int main()
{
    int mat[3][5] , linha, coluna ,soma=0 ;

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<5;coluna++){
            printf("Digite os elementos [%i][%i]" , linha , coluna);
            scanf("%i",&mat[linha][coluna]);
        }
    }

    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<5;coluna++)
        {
            printf("%i\t", mat[linha][coluna]);
        }
        printf("\n");
    }

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<5;coluna++){
            if(mat[linha][coluna]>= 15 && mat[linha][coluna] <= 20){
                soma++;
            }
        }
    }
    printf("Numeros entre 15 e 20 %i" , soma);


return 0;
}
