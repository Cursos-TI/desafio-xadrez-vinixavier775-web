#include <stdio.h>

int main(){
    //Variavel
    int i = 1;
    //Estrutura de repetição While
    while (i <= 5)
    {
        printf("Torre move-se para a direita!\n");//Movimentação da primeira peça
        i++;
    }
    //Estrutura de repetição Do-While
    do
    {
        printf("Bispo move-se para cima a esquerda!\n");//Movimentação da segunda peça
        i++;
    } while (i <= 10);
    //Estrutura de repetição For
    for (i = 1; i <= 8; i++)
    {
        printf("Rainha move-se para a esquerda!\n");//Movimentação da terceira peça
    }
    
    return 0;
}