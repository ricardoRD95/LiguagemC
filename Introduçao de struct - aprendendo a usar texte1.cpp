//Programa do Ricardo
#include<stdio.h> // biblioteca para entrada e saida de dados.

	struct lista    //definiçao de estrutura de struct
	{
		char nome[30];  
		int idade;
		float altura;
		float peso;
		char sexo[20];
		int turma;
	}lista;

int main(){
	
	struct lista cadastro;     //declaração de estrutura de struct 
	
	cadastro.nome[30];
	cadastro.idade;
	cadastro.altura;
	cadastro.peso;
	cadastro.sexo[20];
	
	printf("\nDigite seu nome: ");
	scanf("%s",&cadastro.nome);
	
	printf("\nDigite sua idade: ");
	scanf("%i",&cadastro.idade);
	
	printf("\nDigite sua altura: ");
	scanf("%f",&cadastro.altura);
	
	printf("\nDigite seu peso: ");
	scanf("%f",&cadastro.peso);
	
	printf("\nDigite seu sexo: ");
	scanf("%s",&cadastro.sexo);
	
	printf("\n==========================\n");
	printf("\nNOME REGISTRADO :%s",cadastro.nome);
	
	printf("\n==========================\n");
	printf("\nIDADE REGISTRADA :%i",cadastro.idade);
	
	
	printf("\n==========================\n");
	printf("\nALTURA REGISTRADA :%.1f",cadastro.altura);
	
	printf("\n==========================\n");
	printf("\nPESO REGISTRADO :%.1f",cadastro.peso);
	
	printf("\n==========================\n");
	printf("\nSEXO REGISTRADO :%s",cadastro.sexo);
	
	
	return 0;
}
