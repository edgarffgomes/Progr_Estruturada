/*Fa�a um algoritmo para ler uma palavra pelo teclado (com no m�ximo 15 caracteres) e verificar se ela �
Pal�ndrome ou n�o, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize uma fun��o
para ler a palavra e uma fun��o para fazer a verifica��o. A impress�o da mensagem (se a palavra � ou n�o
Pal�ndrome) deve ser na fun��o main.
Obs. 1: Uma palavra Pal�ndrome � aquela que lida de frente para tr�s e de tr�s para frente tem a mesma
sequ�ncia de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usu�rio pode digitar letras mai�sculas e min�sculas */

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
	printf("A palavra � pal�ndrome\n");
	else
	printf("A palavra n�o � pal�ndrome\n");
	return 0;
}
void leitura(char palavra[]){
	printf("Digite uma palavra de at� 15 caracteres: ");
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
