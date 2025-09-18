#include <stdio.h>

//Recursividade
//Torre   
void MoverTorre(int casas) {
    if (casas > 0)
    {
        printf("Torre move-se para a Direita!\n");
        MoverTorre(casas - 1);
    }
}

//Bispo 
void MoverBispo(int casas) {
    if (casas > 0)
    {
        printf("Bispo move-se para cima a esquerda!\n");
        MoverBispo(casas - 1);
    }
    
}

//Rainha
void MoverRainha(int casas) {
    if (casas > 0)
    {
        printf("Rainha move-se para a esquerda!\n");
        MoverRainha(casas - 1);
    }
        
}
int main(){
    //Variavel
    int i = 1;
    int cavalo = 1;

   MoverTorre(5);

   MoverBispo(5);
   
   MoverRainha(8);
    
   //Loop Avançado para o cavalo
   for (int i = 1; i < 4; i++) {
        if (i == 3) continue;
        if (i == 4) break;
        printf("Cavalo se move para cima\n");
    }
    for (i = 1; i < 3; i++)
    {
        if (i == 2) continue;
        if (i == 3) break;
        
        printf("Cavalo se move para direita\n");
    }
    
    
    
    return 0;
}