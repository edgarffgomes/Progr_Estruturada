//Faça um programa em C que leia duas notas, calcule e imprima a média aritmética.
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2,media;
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	media = (nota1 + nota2)/2;
	printf("A média das notas é %f\n", media);
	return 0;
}
