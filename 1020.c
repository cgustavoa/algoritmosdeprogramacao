#include <stdio.h>

int main(){
int idadedias, Y, M, D;

scanf("%d",&idadedias);

Y = idadedias/365;
M = (idadedias%365)/30;
D = (idadedias%365)%30;

printf("%d ano(s)\n %d mes(es)\n %d dia(s)",Y, M, D);

return 0;
}
