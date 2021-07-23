/*Faça um algoritmo para ler uma palavra pelo teclado (com no máximo 15 caracteres) e verificar se ela é
Palíndrome ou não, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize uma função
para ler a palavra e uma função para fazer a verificação. A impressão da mensagem (se a palavra é ou não
Palíndrome) deve ser na função main.
Obs. 1: Uma palavra Palíndrome é aquela que lida de frente para trás e de trás para frente tem a mesma
sequência de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas */

#include<stdio.h>
#include<string.h>
#include <locale.h>
#define tam 15
void leitura(char palavra[]);
int verificaPalindrome (char palavra[]);
int main (){
	setlocale(LC_ALL, "Portuguese");
	char palavra[tam];
	leitura(palavra);
	if (verificaPalindrome(palavra) == 1)
	printf("A palavra é palíndrome\n");
	else
	printf("A palavra não é palíndrome\n");
	return 0;
}
void leitura(char palavra[]){
	printf("Digite uma palavra de até 15 caracteres: ");
	scanf("%s", strupr(palavra));
}

int verificaPalindrome (char palavra[]){
	int i=0, j = strlen(palavra), ver=0;

	while(tam>i){
		if(palavra[i] == palavra[j]){
			ver++;
		}
		i++;
		j --;
	}
	if(ver == strlen(palavra))
	return 1;
	else
	return 0;
}
