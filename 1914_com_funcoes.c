#include <stdio.h>
#include <string.h>

char* ehParOuImpar(int valor){
    if(valor%2 == 0){ // se ovalor for par retorna "par"
        return "PAR";
    } else{ // se nao retorna "impar"
        return "IMPAR";
    }
}
int main(){
    int numEntradas;
    char nome1[101], nome2[101], escolha1[6], escolha2[6];
    int valor1, valor2;
    scanf("%d", &numEntradas);

    for(int i =0;i < numEntradas;i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &valor1);
        scanf("%d", &valor2);

        int soma = valor1 + valor2;
        char somaEhParOuImpar;

        strcpy(somaEhParOuImpar, ehParOuImpar(soma));

        if(strcmp(somaEhParOuImpar, escolha1)== 0){
            printf("%s\n", nome1);
        }

        if(strcmp(somaEhParOuImpar, "PAR") == 0 && strcmp(escolha1, "PAR")){
            printf("%s\n", nome1);
        } else if(soma%2 == 1 && strcmp (escolha1, "IMPAR")== 0){
            printf("%s\n", nome1);
        } else {
            printf("%s\n", nome2);
        }

    }

    return 0;
}