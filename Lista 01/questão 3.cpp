#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	float n1, n2, media;
	
	printf("Programa para calcular m�dia:\n\n");
	
	printf("Primeira nota:");
	scanf("%f",&n1);
	
	printf("Segunda nota:");
	scanf("%f",&n2);
	
	media = (n1 + n2)/2;
	
	printf("O valor calculado da m�dia entre os n�meros: %f e %f �: %f", n1, n2, media );
	
	return 0;
}
