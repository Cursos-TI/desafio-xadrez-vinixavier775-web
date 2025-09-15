#include <stdio.h>

int main(){
    //Variavel
    int i = 1;
    int cavalo = 1;

    //Movimento da Torre
    while (i <= 5)
    {
        printf("Torre move-se para a direita!\n");
        i++;
    }

    //Movimento do Bispo
    do
    {
        printf("Bispo move-se para cima a esquerda!\n");
        i++;
    } while (i <= 10);

    //Movimento da Rainha
    for (i = 1; i <= 8; i++)
    {
        printf("Rainha move-se para a esquerda!\n");
    }
    
    //Movimento do Cavalo
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Cavalo se move para baixo!\n");
        }
        printf("Cavalo se move para a esquerda!\n");
    }
    
    
    return 0;
}