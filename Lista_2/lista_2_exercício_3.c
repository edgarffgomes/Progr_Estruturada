/*Fa�a um programa na linguagem C que leia o nome, o telefone, os tr�s �ltimos sal�rios e
exibe a seguintes informa��es:
 Media dos Sal�rios.
 Maior Salario.
 Menor Salario.*/
#include<stdio.h>
#include<locale.h>
float verificaMaior(float s1, float s2, float s3){
	if(s1>s2 && s1>s3)
	return s1;
	if(s2>s1 && s2>s3)
	return s2;
	if(s3>s1 && s3>s2)
	return s3;
}
float verificaMenor(float s1, float s2, float s3){
	if(s1<s2 && s1<s3)
	return s1;
	if(s2<s1 && s2<s3)
	return s2;
	if(s3<s1 && s3<s2)
	return s3;
}
float verificaMedia(float s1, float s2, float s3){
	return (s1+s2+s3)/3;
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario1, salario2, salario3;
	printf("Digite o primeiro sal�rio\n");
	scanf("%f", &salario1);
	printf("Digite o segundo sal�rio\n");
	scanf("%f", &salario2);
	printf("Digite o terceiro sal�rio\n");
	scanf("%f", &salario3);
	printf("O maior sal�rio � %.2f\n", verificaMaior(salario1, salario2, salario3));
	printf("O menor sal�rio � %.2f\n", verificaMenor(salario1, salario2, salario3));
	printf("A m�dia dos sal�rio � %.2f\n", verificaMedia(salario1, salario2, salario3));
}
