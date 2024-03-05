#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int i;
	
	printf("Exibindo números ímpares: \n");
	
	for(i = 1; i <= 20; i++) {
		if(i % 2 != 0) {
			printf("%d \n",i);
		}
	}
	
	return 0;
	
}
