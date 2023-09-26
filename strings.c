#include <stdio.h>

int main(){
    // primeira forma de inicializar
    char string1[10] = {'a', 'b', 'c', '\0'};
    // Se não usar \0 pode ser que na memoria exista outros valores salvos
    // nas poutras posições

    // segunda forma de inicializar
    char string2[10] = "def";
/*      char lixo;
        for(int pos = 0;pos <3;pos ++){
            scanf("%c", &string3 [pos]);
            scanf("%c", &lixo);
        }
        string3[3] = '\0';
*/
    //terceira forma de inicializar, usando for
    char string3[20] = "ghi";
   /* printf("Insira uma string para ser lida pelo'gets: ");
    gets(string3);
*/
    // quarta forma de inicializar
    char string4[20];
    printf("Insira uma string para ser lida pelo'fgets: ");
    // ler strings
    fgets(string4, 20, stdin);

    // inicializando passando uma lista de char
    printf("string1: %s\n", string1);
    // inicilaizando passndo uma string literal
    printf("string2: %s\n", string2);
    // inicializando com gets
    printf("string3: %s\n", string3);
    // inicializando com fgets
    printf("string4: %s\n", string4);
    // outra forma de imprimir
    prinf("imprimindo string4 com fputs:\n");
    fputs(string4, stdout); 

    //ALTERAR COM O CODIGO DO GIT DO JOAO



    return 0;
}