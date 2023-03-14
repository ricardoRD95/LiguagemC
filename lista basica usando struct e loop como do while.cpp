//Programa feito por Ricardo.
/*Esse programa foi feito com o objetivo de fazer uma lista de cadastro basico com o usuario uando o loop para repetir quantas vezes for necessario.*/

#include<stdio.h>  // Biblioteca para a entredae saida de dados 

struct lista 
{
	char nome[30];
	int idade;
	int dia;
	int mes;
	int ano;
	float altura;
	float peso;
	char sexo[10];
	
}lista;

int main(){
	
	int continuar;
	
	do{
	
	struct lista cadastro; //declaração de estrutura de struct
	
	cadastro.nome[30];
	cadastro.idade;
	cadastro.dia;
	cadastro.mes;
	cadastro.ano;
	cadastro.altura;
	cadastro.peso;
	cadastro.sexo[10];	
	
	printf("\n------------------------\n");
	printf("\nDIGITE SEU NOME: ");
	scanf("%s",&cadastro.nome);
	printf("\n------------------------\n");
	
	printf("\nDIGITE SUA IDADE: ");
	scanf("%i",&cadastro.idade);
	printf("\n------------------------\n");
	
	printf("\nDIGITE SEU DIA DE NASCIMENTO: ");
	scanf("%i",&cadastro.dia);
	printf("\n------------------------\n");
	
	printf("\nDIGITE O MES DE NASCIMENTO: ");
	scanf("%i",&cadastro.mes);
	printf("\n------------------------\n");
	
	printf("\nDIGITE O ANO DE NASCIMENTO : ");
	scanf("%i",&cadastro.ano);
	printf("\n------------------------\n");
	
	printf("\nDIGITE SUA ALTURA: ");
	scanf("%f",&cadastro.altura);
	printf("\n------------------------\n");

	printf("\nDIGITE SEU PESO: ");
	scanf("%f",&cadastro.peso);
	printf("\n------------------------\n");

	printf("\nDIGITE SEU SEXO: ");
	scanf("%s",&cadastro.sexo);
	printf("\n------------------------\n\n");
	
	printf("\n!!!!LISTA DO CADASTRO FINALIZADO!!!!!\n");
	
	printf("\n=====================================\n");
	printf("\nO NOME REGISTRADO E: %s\n",cadastro.nome);
	printf("\n=====================================\n");
	
	printf("\nA IDADE REGISTRADA E: %i\n",cadastro.idade);
	printf("\n=====================================\n");

	printf("\nA DATA DE NASCIMENTO REGISTRADA E: %i/%i/%i\n",cadastro.dia,cadastro.mes,cadastro.ano);
	printf("\n=====================================\n");
	
	printf("\nA ALTURA REGSITRADA E: %.2f\n",cadastro.altura);
	printf("\n=====================================\n");
	
	printf("\nO PESO REGISTRADO E: %.2f\n",cadastro.peso);
	printf("\n=====================================\n");
	
	printf("\nO SEXO REGISTRADO E: %s\n",cadastro.sexo);
	printf("\n=====================================\n");
		
	printf("\nVOCE DESEJA FAZER MAIS UM CADASTRO?\n");
	printf("\nSE DESEJA CONTINUAR DIGITE '1' OU '0' PARA FINALIZAR");
	printf("\nResposta: ");
	scanf("%i",&continuar);
	
	}while(continuar == 1);
	
	return 0;
}
