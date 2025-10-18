#include <stdio.h>
//Movimentação das peças//
void torre (int casas){

    if (casas > 0) {
        printf(" Torre Direita\n");
        torre (casas - 1);
    }
}
void rainha (int casas){
    if (casas > 0) {
        printf("Rainha Esquerda\n");
        rainha (casas - 1);
    }
}
void bispo (int casas){
    if (casas > 0) {
        
        printf("Bispo Cima\n");
        printf("Bispo Direita\n"); 
        
       
        bispo(casas - 1); 
    }
}
void cavalo (int casas){
    if (casas > 0) {
        for (int c = 1; c <= 2; c++){
            printf("Cavalo Cima\n");
        }
        printf("Cavalo Direita\n");
    }
}
//Chamada das funções//
int main (){
    bispo (5);
    torre (5);
    rainha (8);
    cavalo (1);
    return 0;
}
