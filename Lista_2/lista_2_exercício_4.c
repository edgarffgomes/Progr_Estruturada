/*Fa�a um programa na linguagem C que leia os dados da ficha de matricula de um novo
aluno conforme abaixo:
 Nome.
 Idade (18 a 99 anos).
 Grau de Instru��o (1 � 2o grau, 2 � Superior, 3 � P�s-graduado).
 C�digo do curso (1 � Ci�ncia da Computa��o, 2 � Engenharia, 3 � Matem�tica, 4 �
Marketing e 5 � Direito ).
 Valor da mensalidade.
 Percentual de desconto (0 a 100).
Com base nestas informa��es calcule a mensalidade com desconto e exiba as informa��es
abaixo:
 Valor da Mensalidade com Desconto.
 Nome do Curso.
 Situa��o do Aluno (Aluno Especial ou Aluno Comum).*/
#include<stdio.h>
#include<string.h>
#include<locale.h>
float calculaMensalidade(float mens,float desc){
	float m;
	 m = mens - mens*(desc/100);
	 return m;
}
void imprimeCurso(int curso){
	switch (curso){
		case 1:
			printf("Ci�ncia da computa��o\n");
			break;
		case 2:
			printf("Engenharia\n");
			break;
		case 3:
			printf("Matem�tica\n");
			break;
		case 4:
			printf("Marketing\n");
			break;
		case 5:
			printf("Direito\n");
			break;
		default:
			printf("Curso n�o identificado!\n");
	}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	int idade, desconto, instrucao, curso;
	float mensalidade;
	printf("Digite o nome\n");
	scanf("%s", nome);
	printf("Digite a idade\n");
	scanf("%d", &idade);
	printf("Digite o grau de instru��o:\n1-2� Grau\n2-Superior\n3-P�s-Graduado\n\n");
	scanf("%d", &instrucao);
	printf("Digite o c�digo do curso\n1 - Ci�ncia da Computa��o\n2 - Engenharia\n3 - Matem�tica\n4 - Marketing\n5 - Direito\n\n");
	scanf("%d", &curso);
	printf("Digite o valor da mensalidade\n");
	scanf("%f", &mensalidade);
	printf("Digite o percentual de desconto\n");
	scanf("%d", &desconto);
	printf("O valor da mensalidade �: %.2f\n", calculaMensalidade(mensalidade,desconto));
	imprimeCurso(curso);
	if(calculaMensalidade(mensalidade,desconto) == mensalidade)
	printf("Aluno comum\n");
	else
	printf("Aluno especial\n");
	return 0;	
}
