/*Exerc�cio 4.2. Defina as macros descritas a seguir:
a) eh_minuscula(c): informa se o caracter c � uma letra min�scula.
b) eh_maiuscula(c): informa se o caracter c � uma letra mai�scula.
c) minuscula(c): converte a letra c para min�scula.
d) maiuscula(c): converte a letra c para mai�scula.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#define eh_minuscula(c) printf("\neh minuscula")
#define eh_maiuscula(c) printf("\neh maiuscula")
#define minuscula(c) toupper(c)
#define maiuscula(c) tolower(c)
 
 int main(){
 	char c='m';
 	eh_minuscula(c);
 	eh_maiuscula(c);
 	
 	printf("\n%c",minuscula(c));
 	
 	printf("\n%c",maiuscula(c));
 }
