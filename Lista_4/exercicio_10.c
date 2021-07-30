/* Faça um algoritmo que verifique se uma dada matriz quadrada 8×8 gerada
aleatoriamente com números de 0 até 14 é uma matriz triangular inferior. Em uma
matriz triangular inferior, todos os elementos acima da diagonal principal são iguais a 0.
Os demais elementos podem assumir quaisquer valores. Crie e utilize duas funções:
uma para a geração da matriz e outra para a verificação. De acordo com o retorno da
função de verificação, deve-se imprimir na função main: “MATRIZ TRIANGULAR
INFERIOR” ou “MATRIZ NAO TRIANGULAR INFERIOR”. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 8
#define B 8
void preencheMatriz (int matriz[][B]);
int verificaTriInf (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B];
	preencheMatriz(matriz);
	if(verificaTriInf(matriz) == 1)
	printf("MATRIZ TRIANGULAR INFERIOR");
	else
	printf("MATRIZ NÃO TRIANGULAR INFERIOR");
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () %  14;
			printf(" %d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaTriInf (int matriz [][B]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(i<j && matriz[i][j] == 0)
			ver++;
		}
	if(ver == 28)
	return 1;
	else
	return 0;
}
