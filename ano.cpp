#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <dos.h>
#include<windows.h>
/*Exercício 2.3. Dado um ano, informe se ele é ou não bissexto. [Dica: um ano
é bissexto se é divisível por 4 mas não por 100].*/

	int bissexto(int ano){
		if(ano%4==0 && ano%100!=0 || ano%400==0){
	    	printf("\n %d um ano bissexto!",ano);
	    	
	    	return 366;
	}else
        	printf("\n %d nao eh bissexto!",ano);
        	return 365;
	}
int main(){
	int opcao;
	do{
		printf("\n1- REALIZAR TESTE \n");
		printf("0-Sair do programa\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				printf("\n\n\n1");
				int ano,i,t;
				printf("Digite o ano que voce nasceu:");
				scanf("%d",&t);
				for(ano=t;ano<=2017;ano++){
					i=bissexto(ano)+i;
				
				}
	   // printf("Digite o ano:");
    	//scanf("%d",&ano);
    	
    	   printf("\n \nVoce viveu %d dias",i);
				
				break;
		case 0:
		
		break;		
		}
	
	}while(opcao!=0);
	
	
}
