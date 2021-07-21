/*Faça um programa em C que leia duas notas, calcule a média e imprima a avaliação
do aluno conforme critério abaixo:
Média < 5 ---> 'Fraco'
Media <= 5 ---> 'Regular'
Media <= 8 --> 'Bom'
Media > 8 ---> 'Excelente'*/
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
	printf("A média das notas é %f\n", media);
	if(media<5)
	printf("Desempenho fraco!\n");
	if(media==5)
	printf("Desempenho regular!\n");
	if (media>5 && media<=8)
	printf("Desempenho bom!\n");
	if(media>8)
	printf("Desempenho excelente!\n");
	return 0;
}
