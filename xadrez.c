#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main0() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente
int torre(){
    // mover a torre 5 casa para a direita 
    for (int i = 1;   i <  6;  i++) {
        printf("movimenta a torre %d Direita\n",i); // Imprime a direção do movimento 
    }
    return 0;
}
int bispo() {
    
    int i = 1;
   
    while (i <= 5) {
        // mover o bispo para cima 
        printf("movimenta o bispo %d casa cima \n", i);
        // mover o bispo para direita
        printf("movimenta o bispo %d casa direita \n", i);

        i++;
    }
    
   
    return 0;
}
int rainha() {
    int i = 1;
   
    do {
     //  printf("mover a rainha %d  esquerda \n", i);
     movimentar(i, "esquedar","raimha");
        i++;
    } while (i <= 8);
   
    return 0;
}
int movimentar(int posicao,char direcao[100],char peca[10]){
    printf("mover a %s %d casa %s \n", peca,posicao,direcao);

}
int main(){
    torre();
    bispo();
    rainha();
}