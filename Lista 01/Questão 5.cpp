#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int n1, n2, quociente, resto;
	
	printf("Programa para calcular quociente e resto:\n\n");
	
	printf("Primeiro n�mero:");
	scanf("%d",&n1);
	
	printf("Segundo n�mero:");
	scanf("%d",&n2);
	
	
	quociente = (float) n1/n2;
	resto = n1 % n2;
	
	printf("\n O valor do c�lculo do quociente entre os n�meros %d e %d �: %d \n", n1, n2, quociente);
	
	printf(" O valor do c�lculo do resto entre os n�meros %d e %d �: %d", n1, n2, resto);

	
	return 0;
}
