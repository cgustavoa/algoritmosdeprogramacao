#include <stdio.h>
// o "int" que usa 4 bytes pode representar 4 bilhoes de numeros
// %d representa o numero inteiro;

int main(){
    int numero1;
    int numero2;
    int resultado;

    numero1 = 6;
    numero2 = 3;

    resultado = numero1 / numero2;
    printf("Resultado: %d\n", resultado); 

    return 0;
}
