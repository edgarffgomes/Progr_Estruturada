/*Fa�a um programa em C que leia duas notas, calcule a m�dia e imprima a avalia��o
do aluno conforme crit�rio abaixo:
M�dia < 5 ---> 'Fraco'
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
	printf("A m�dia das notas � %f\n", media);
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
