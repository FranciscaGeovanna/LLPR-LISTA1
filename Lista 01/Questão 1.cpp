#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("Programa para calcular média:\n\n");
	
	printf("Primeira nota:");
	scanf("%f",&n1);
	
	printf("Segunda nota:");
	scanf("%f",&n2);
	
	printf("Terceira nota:");
	scanf("%f",&n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("O valor calculado da média entre os números: %f, %f e %f é: %f", n1, n2, n3, media );
	
	return 0;
}
