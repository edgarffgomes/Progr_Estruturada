//Fa�a um programa em C que leia duas notas, calcule a m�dia e imprima a situa��o
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2,media;
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	media = (nota1 + nota2)/2;
	printf("A m�dia das notas � %f\n", media);
	if(media>=5)
	printf("Aluno(a) aprovado(a)!\n");
	else
	printf("Aluno(a) reprovado(a)!\n");
	return 0;
}

