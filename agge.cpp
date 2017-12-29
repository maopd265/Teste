/*Exercício 3.10. Numa certa agência bancária, as contas são identificadas
por números de até seis dígitos seguidos de um dígito verificador, calculado
conforme exemplificado a seguir. Dado um número de conta n, exiba o
número de conta completo correspondente. 
Seja n = 7314 o número da conta.
1
º
 Adicionamos os dígitos de n e obtemos a soma s = 4+1+3+7 = 15;
2
º
 Calculamos o resto da divisão de s por 10 e obtemos o dígito d = 5.
Número de conta completo: 007314-5
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>


int main(){
	int i,j=1,k=0,aux;
	int t;
	
	printf("AGENCIA BANK OF ALGORITMIC\n");
	
	printf("\n");
	t= rand() ;
	int m=t;
	printf("\nNum :%d",m);
	while(t!=0){
		if(t%10!=0){
		
		aux=t/10;
		k=t%10+k;
		j++;
		t=aux;
		printf("\naux=%d \n k=%d\nj=%d\n t=%d",aux,k,j,t);
		} 
		
	}
	printf("\nJ=%d",j);
	if(j==1){
		printf("\n Num conta:00000%d-%d",m,k);
	}
	if(j==2){
		printf("\nNum conta:00000%d-%d",m,k);
	}
	if(j==3){
		printf("\nNum conta:0000%d-%d",m,k);
	}
	if(j==4){
		printf("\nNum conta:000%d - %d",m,k);
	}
	if(j==5){
		printf("\nNum conta:00%d-%d",m,k);
	}
	if(j==6){
	printf("\n Num conta:0%d-%d",m,k);	
	}
    if(j==7){
    	printf("\n Num conta: %d-%d",m,k);
	}
	if(j>7){
		printf("Problemas");
	}
	
		
	
//teste digito
//contador
//pegar o resto para somar	
	
	
	
}
