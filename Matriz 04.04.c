#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    
    char alunos[2][200];//Vetor para dois nomes
    float notas[2][3];//Matriz com 3 notas para dois alunos
    int i, j;
    
    for(i=0; i<2; i++){
        printf("digite o nome do %i� aluno: ", i+1);
        scanf("%s",&alunos[i]);
        
        for(j=0; j<2; j++){
            printf("Digite a %i� nota: ", j+1);
            scanf("%f",&notas[i][j]);
        }
    
        printf("\n");//Somente para pular linha
    }
    
    printf("\n === Exibindo Resultados === \n");
    
    for(i=0; i<2; i++){
        printf("%i� aluno: %s \n", i+1, alunos[i]);
        
        for(j=0; j<2; j++){
            printf("%i� nota: ", j+1, notas[i][j]);
        }
    
        printf("\n");//Somente para pular linha
    }
    
    return 0;
}

