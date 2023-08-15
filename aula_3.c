#include <stdio.h>

int main(){
    int nota1,nota2,nota3,media;
    
    printf("Digite 3 notas de um aluno:");
    
    scanf("%d", &nota1);
    printf("Nota 2:");
    scanf("%d", &nota2); 
    printf("Nota 3:");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if(media == 8){
        printf("Você ganhou um ponto\n");
        media == media + 1;
    }
    else if(media == 9){
        printf("Mais um ponto");
        media == media + 1;
    }

    printf("media: %d,\n", media);

    if(media < 7){
        printf("Reprovado\n");
    }
    else if(media > 8){
        printf("Espetacular\n");
    }
    else if(media > 9){
        printf("GOD\n");
    }
    else{
        printf("Aprovado\n");
    }
    return 0;
}