/*Exercício 4.2. Defina as macros descritas a seguir:
a) eh_minuscula(c): informa se o caracter c é uma letra minúscula.
b) eh_maiuscula(c): informa se o caracter c é uma letra maiúscula.
c) minuscula(c): converte a letra c para minúscula.
d) maiuscula(c): converte a letra c para maiúscula.*/

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
