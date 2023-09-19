#include <stdio.h>
//Evitar as seguintes coisas:
//printf("Valor da posicao -1: %d", vetor[-1]); --> acessar posicoes negativas
//printf("Valor da posicao 10: %d", vetor[10]); --> acessar posicoes alem do tamanho do meu vetor
int main(){
//PRIMEIRA FORMA
    int vetor [4] = {1, 2, 3, 4};

    printf("Imprimindo vetor: %d\n", vetor);
    printf("Endereco de memoria do vetor: %d\n", &vetor[0]);
    printf("Endereco de memoria do vetor: %d\n", &vetor[1]);

/* SEGUNDA FORMA
    int vetor[4];
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
*/
/* TERCEIRA FORMA
    int vetor[4];
    for(int i = 0;i <= 3; i ++){
        scanf("%d", &vetor[i]);
    }
*/
    printf("Valor da posicao 0: %d\n", vetor[0]);
    printf("Valor da posicao 1: %d\n", vetor[1]);
    printf("Valor da posicao 2: %d\n", vetor[2]);
    printf("Valor da posicao 3: %d\n", vetor[3]);
    
    return 0;
}