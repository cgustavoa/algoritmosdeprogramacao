#include <stdio.h>

int main(){


    int i = 0;
    int nota;

    
    printf("Insira uma nota positiva\n");
    scanf("%d", &nota);
    
    do{
        printf("Valor de i: %d!!!!\n", i);
        scanf("%d", &nota);
    } while(nota > 0);

    printf("Nota lida: %d\n", nota);







//   for(int i = 0; 1 <= 2; i++){
//        printf("Valor de i: %d!!!!\n", i);
//   }
//
//   printf("Saiu do for\n");
//    return 0;
}