/* Considere um vetor com 100 números lidos pelo teclado. Faça um algoritmo para ler pelo teclado (na função
main) um número inteiro n (1 = n = 100) e imprimir todos os números que aparecem no vetor exatamente n
vezes. Caso nenhum número apareça exatamente n vezes no vetor, esta informação deve ser impressa. Crie e
utilize duas funções: uma para preencher o vetor e outra para imprimir o que se pede. Exemplo com um vetor
de 10 números e n = 2:
1
Vetor: {3, 1, 9, 8, 3, 10, 1, 5, 9, 1}
Números que aparecem exatamente 2 vezes: 3, 9
Obs.: Não é permitido ordenar o vetor.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>
#define tam 100
void preencheVetor(int vetor[]);
void imprimeInfo (int vetor[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[tam];
	preencheVetor(vetor);
	imprimeInfo(vetor);
	return 0;
}
void preencheVetor(int vetor[]){
	int i=0;
	for(i=0;i<tam;i++){
		printf("Digite um valor entre 1 e 100 para inserir na posição %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
}
void imprimeInfo(int vetor[]){
	int i,j, quantidade, vetaux[100];
	for(i=0;i<100;i++){
		vetaux[i] = 0;
	}
	for (i=0;i<100;i++){
		for(j=0;j<tam;j++){
			if(vetor[j] == i)
			vetaux[i]++;
		}
	}
		printf("Digite a quantidade de aparições a ser verificadas: ");
		scanf("%d", &quantidade);
		printf("Números que aparecem %d vezes:\n", quantidade);
		for(i=0;i<tam;i++){
			if(vetaux[i] == quantidade)
			printf("%d ", i);
		}
}
