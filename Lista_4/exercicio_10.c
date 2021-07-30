/* Fa�a um algoritmo que verifique se uma dada matriz quadrada 8�8 gerada
aleatoriamente com n�meros de 0 at� 14 � uma matriz triangular inferior. Em uma
matriz triangular inferior, todos os elementos acima da diagonal principal s�o iguais a 0.
Os demais elementos podem assumir quaisquer valores. Crie e utilize duas fun��es:
uma para a gera��o da matriz e outra para a verifica��o. De acordo com o retorno da
fun��o de verifica��o, deve-se imprimir na fun��o main: �MATRIZ TRIANGULAR
INFERIOR� ou �MATRIZ NAO TRIANGULAR INFERIOR�. */

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
	printf("MATRIZ N�O TRIANGULAR INFERIOR");
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
