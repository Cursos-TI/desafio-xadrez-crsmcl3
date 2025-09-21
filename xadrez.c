#include <stdio.h>

int main() {
    
    int t = 0, b = 0, r = 0;


    printf("Movimentação TORRE:\n");
        for (t; t < 5; t++)
        {printf("Direita\n");}

    printf("\nMovimentação BISPO:\n");
        do{
        printf("Cima, Direita\n");
        b++;
        } while (b < 5);

    printf("\nMovimentação RAINHA:\n");//OBS: é impossível a rainha se movimentar 8 casas para a esquerda pois o tabuleiro
        while (r < 8)                  //tem apenas 8 colunas.. então para ele andar "oito casas para a esquerda"
        {printf("Esquerda\n"); r++;}   //conforme enunciado, a rainha precisaria estar na casa 9 (que não existe).

    
    return 0;
}