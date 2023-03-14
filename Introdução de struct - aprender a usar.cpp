//Programa do Ricardo
#include<stdio.h>

	struct horario       // definir uma estrutura 
	{
		int horas;
		int minutos;
		int segundos;	
		
	};	
	

int main(){
	
	struct horario agora;  //declaração da estrutura  
	
	agora.horas = 15;          // nomes das estruturas e seus variaveis
	agora.minutos = 33;
	agora.segundos = 25;
	
	
	printf("\n%i:%i:%i", agora.horas , agora.minutos, agora.segundos);
	
	return 0;
}
