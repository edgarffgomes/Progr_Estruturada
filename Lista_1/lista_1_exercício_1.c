//Fa�a um programa em C que leia duas notas, calcule e imprima a m�dia aritm�tica.
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
	printf("A m�dia das notas � %f\n", media);
	return 0;
}
