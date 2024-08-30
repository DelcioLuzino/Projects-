#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 

{
//variaves utilizadas no programa.
int n1, n2, soma;	

//config para leitura da biblioteca locale
	setlocale(LC_ALL,"Portuguese");

//inicio do programa, escrever um número, leitura do número depois esse numero e gurdado na variavel n fazendo o mesmo aparecer na tela...
	printf("Escreva um número: ");
	scanf("%i",&n1);
	printf("\n");
	
//  Mesma coisa que esta por cima.
	printf("Escreva o outro número: ");
	scanf("%i", &n2);
	printf("\n");
 // Realização da soma dos números e apresentação do resultado
	soma = n1 + n2;
    printf("A soma entre %i e %i é %i.", n1, n2, soma);
// começar do zero
	return 0;
}
