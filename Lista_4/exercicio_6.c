/* Faça um algoritmo para verificar se uma matriz quadrada 10×10 gerada
aleatoriamente com números de 1 até 50 é simétrica. Crie e utilize duas funções: uma
para a geração da matriz e outra para a verificação. De acordo com o retorno da função
de verificação, deve-se imprimir na função main: “MATRIZ SIMETRICA” ou
“MATRIZ NAO SIMETRICA”. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdlib.h>
#define A 10
#define B 10
void preencheMatriz (int matriz[][B]);
int verificaSimetria (int matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B];
	preencheMatriz(matriz);
	if(verificaSimetria(matriz) == 1)
	printf("A matriz é simétrica");
	else
	printf("A matriz não é simétrica");
	return 0;
}

void preencheMatriz (int matriz[][B]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			matriz[i][j] = rand () % 50 +1;
			printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
}

int verificaSimetria (int matriz [][B]){
	int i, j, ver=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j] == matriz[j][i])
			ver++;
		}
	if(ver == 100)
	return 1;
	else
	return 0;
}
