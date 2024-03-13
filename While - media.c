#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float nota, soma, media;
	int i;
	
	for(i = 1; i <= 2; i++){
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);

	
	while(nota < 0 || nota > 10){
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
	}

	soma += nota;
	
}

	media = soma / 2;
	
	printf("Media: %.1f", media);
	
	return 0;
}
