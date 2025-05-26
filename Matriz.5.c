#include <stdio.h>
int main() {
	int mat[3][3], linha, coluna, i, linha_escolhida ,soma=0;

	for(linha=0; linha<3; linha++)
	{
		for(coluna=0; coluna<3; coluna++)
		{
			printf("[%i][%i]\t",linha,coluna);
			scanf("%i",&mat[linha][coluna]);
		}
	}

	for(linha=0; linha<3; linha++)
	{
		for(coluna=0; coluna<3; coluna++)
		{
			printf("%i\t", mat[linha][coluna]);
		}
		printf("\n");
	}


	printf("Digite a linha(entre 0 e 2):");
	scanf("%i\n", &linha_escolhida);


	if(linha_escolhida >= 0 &&  linha_escolhida <= 2 )
	{
		for(coluna=0; coluna<3; coluna++)
		{
			printf("%i\t", mat[linha_escolhida][coluna]);
		}
	}

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            if (mat[linha][coluna] % 2 == 0) {
                soma += mat[linha][coluna];
            }
        }
    }
    printf("\nSoma dos números pares: %i\n", soma);

    return 0;
}


