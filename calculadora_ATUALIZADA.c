#include <stdio.h>
// o "int" que usa 4 bytes pode representar 4 bilhoes de numeros
// %d representa o numero inteiro;

int main(){
    int numero1;
    int numero2;
    char operacao;


    printf("insira uma operacao:\n");
    scanf("%c", &operacao);

    printf("insira dois numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    if(operacao == '+'){
        printf("Resultado: %d\n", numero1 + numero2);
    } else if(operacao == '-'){
        printf("Resultado: %d\n", numero1 - numero2);
    } else if(operacao == '*'){
        printf("Resultado: %d\n", numero1 * numero2);
    } else if(operacao == '/'){
        printf("Resultado: %d\n", numero1 / numero2);
    } else if(operacao == '%'){
        printf("Resultado: %d\n", numero1 % numero2);
    } else{
        printf("OPERACAO INVALIDA!!!\n");
    }

    return 0;
}
