/* Fa�a um algoritmo para ler pelo teclado uma matriz 5�5 com valores inteiros e
tamb�m um n�mero inteiro x. Ao final, o algoritmo tem que imprimir se o n�mero x
pertence ou n�o � matriz. O n�mero x tem que ser lido na fun��o main. Crie e utilize
duas fun��es: uma para a leitura da matriz e outra para realizar a busca. A impress�o da
informa��o (se x est� presente ou n�o na matriz) deve ser na fun��o main. */
#include<stdio.h>
#include <locale.h>
#define A 5
#define B 5
void preencheMatriz (int matriz[][B]);
int retornaPresenca (int matriz [][B], int numero);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int matriz [A][B], numero;
	preencheMatriz(matriz);
	printf("Digite um n�mero para ser buscado na matriz: ");
	scanf("%d", &numero);
	if(retornaPresenca(matriz, numero) == 1)
	printf("O n�mero est� presente na matriz\n");
	else
	printf("O n�mero n�o est� presente na matriz\n");
	
	return 0;
}
void preencheMatriz (int matriz[][B]){
	int i,j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			printf("Escolha um valor para M[%d][%d]: ", i+1,j+1);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
		for(i=0;i<A;i++){
			for(j=0;j<B;j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
}
int retornaPresenca (int matriz [][B], int numero){
	int i, j;
	for(i=0;i<A;i++)
		for(j=0;j<B;j++){
			if(matriz[i][j] == numero)
			return 1;
		}
		return 0;
}
