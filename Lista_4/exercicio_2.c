/* Faça um algoritmo para ler pelo teclado uma matriz 7×9 com valores reais e
imprimir quantos valores maiores do que 20 e menores ou iguais a 50 ela possui. Crie e
utilize duas funções: uma para a leitura da matriz e outra para fazer o cálculo. A
impressão do resultado deve ser na função main. */
#include<stdio.h>
#include <locale.h>
#define A 7
#define B 9
void preencheMatriz (float matriz[][B]);
int retornaResultado (float matriz [][B]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	float matriz [A][B];
	preencheMatriz(matriz);
	printf ("A matriz tem %d valores maiores que 20 e menores ou iguais a 50\n", retornaResultado(matriz));
	return 0;
}
void preencheMatriz (float matriz[][B]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para M[%d][%d]: ", i+1,j+1);
			scanf("%f", &matriz[i][j]);
		}
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%.f ", matriz[i][j]);
			}
			printf("\n");
		}
}
int retornaResultado (float matriz [][B]){
	int i, j, resultado=0;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j] > 20 && matriz[i][j]<=50)
			resultado++;
		}
	return resultado;
}
