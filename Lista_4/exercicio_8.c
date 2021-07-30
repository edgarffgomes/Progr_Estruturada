/* Faça um algoritmo para verificar se uma dada matriz quadrada 15×15 gerada
aleatoriamente com números de 0 até 19 é uma matriz identidade. Crie e utilize duas
funções: uma para a geração da matriz e outra para a verificação. De acordo com o
retorno da função de verificação, deve-se imprimir na função main: “MATRIZ
IDENTIDADE” ou “MATRIZ NAO E IDENTIDADE”. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 15
#define B 15
void preencheMatriz (int matriz[][B]);
int verificaIdentidae (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B];
	preencheMatriz(matriz);
	if(verificaIdentidade(matriz) == 1)
	printf("MATRIZ IDENTIDADE");
	else
	printf("MATRIZ NÃO É IDENTIDADE");
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () %  19;
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaIdentidade (int matriz [][B]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if((i == j && matriz[i][j] == 1) || (i!=j && matriz[i][j] == 0))
			ver++;
		}
	if(ver == 225)
	return 1;
	else
	return 0;
}


