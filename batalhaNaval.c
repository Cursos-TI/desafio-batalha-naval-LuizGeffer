#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.



int main() {

    int tabuleiro[10][10] = {0};
    int x,y;
    int linha = 2; //posição do navio horizointal
    int coluna = 4; //posição do navio horizointal
    int linhay = 1; //posição do navio vertical
    int colunay = 1; //posição do navio vertical


    for (int i = 0; i < 3; i++) {  // declara navio de 3 partes horizontal
    tabuleiro[linha][coluna + i] = 3; 
    printf("Navio em (%d, %d)\n", linha, coluna + i); //coordenadas dos navios
    }

    for (int i = 0; i < 5; i++) { // declara navio de 5 partes vertical
    tabuleiro[linhay + i][colunay] = 3;
    printf("Navio em (%d, %d)\n", linhay + i, colunay );//coordenadas dos navios
    }

    
        for (int x = 0; x < 4; x++)  // declara navio de 4 partes diagonal
        {
            tabuleiro[6+x][6+x] = 3;
         printf("Navio em (%d, %d)\n", 6 + x,6+x  );//coordenadas dos navios   
        }

          for (int x = 0; x < 4; x++)  // declara navio de 4 partes diagonal
        {
            tabuleiro[3-x][3-x] = 3;
         printf("Navio em (%d, %d)\n", 3 - x,3-x  );//coordenadas dos navios   
        }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

        int centro = 2;   // coluna central
       int inicioLinha = 7;

    for (int i = 0; i < 3; i++) {           // altura do cone
    for (int j = -i; j <= i; j++) {     // largura cresce
        tabuleiro[inicioLinha + i][centro + j] = 1;
    }
}

        



    
   
    

    for (int i = 0; i < 3; i++) // habilidade em octaedro:
    {
        if(i>0 && i<2){ // adiciona 3 espaços na segunda linha
        for (int x = 0; x < 3; x++)
        {
            tabuleiro[4+i][5+x-i]=1;  // adiciona a habilidade na [4][5]
        }}else
        {   
            tabuleiro[4+i][5]=1;  
        }

        
    }


    
    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

     for (int i = 0; i < 3; i++) // habilidade em octaedro:
    {
        if(i>0 && i<2){ // adiciona 5 espaços na segunda linha
        for (int x = 0; x < 5; x++)
        {
            tabuleiro[0+i][7+x-2]=1;  // adiciona a habilidade na [4][5] , o "-2" serve para centralizar no centro a habilidade
        }}else
        {   
            tabuleiro[0+i][7]=1;  
        }

        
    }

 // Exibe tabuleiro, para visualização
    for(x=0;x<10;x++){   // colunas
        for(y=0;y<10;y++){ // linhas
            printf("%d  ", tabuleiro[x][y]); // imprime o tabuleiro
        }
        printf("\n"); // espaço para as linhas;
    }
    return 0;
}
