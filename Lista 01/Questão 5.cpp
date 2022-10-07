#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int n1, n2, quociente, resto;
	
	printf("Programa para calcular quociente e resto:\n\n");
	
	printf("Primeiro número:");
	scanf("%d",&n1);
	
	printf("Segundo número:");
	scanf("%d",&n2);
	
	
	quociente = (float) n1/n2;
	resto = n1 % n2;
	
	printf("\n O valor do cálculo do quociente entre os números %d e %d é: %d \n", n1, n2, quociente);
	
	printf(" O valor do cálculo do resto entre os números %d e %d é: %d", n1, n2, resto);

	
	return 0;
}
