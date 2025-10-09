#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


int main()
{
    int coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tabuleiro[10][10] = {0};

    //inserção dos navios manualmente substituindo [y][x]
    //navio 1 
    tabuleiro [0][0] = 3;
    tabuleiro [0][1] = 3;
    tabuleiro [0][2] = 3;

    //navio 2
    tabuleiro [9][5] = 3;
    tabuleiro [8][5] = 3;
    tabuleiro [7][5] = 3;
    
    //navio 3
    //tabuleiro [0][4] = 3;
   // tabuleiro [1][5] = 3;
   // tabuleiro [2][6] = 3;

    //navio 4
    //tabuleiro [8][1] = 3;
   // tabuleiro [7][2] = 3;
    //tabuleiro [6][3] = 3;
 
    // int x1, y1, x2, y2;

    printf("*** Batalha Naval ***\n");
    printf("_____________________\n\n");
    printf("  ");

    for (int y = 0; y < 10; y++)
    {
        printf(" %c", coluna[y]);
    }

    printf("\n");

    for (int x = 0; x < 10; x++)
    {
        printf("%2d ", linha[x]);

        for (int y = 0; y < 10; y++)
        {
            printf("%d ", tabuleiro[y][x]);
            /*a lógica utilizada foi que a variavel foi inicializada anteriormente, sendo todo valor = 0,
            quando inserimos um valor em algum dos navios, o programa identifica e imprime 3 ao em vez de 0,
            porém essa lógica nessecita que se insira em cada enderço o valor 3, não há o impedimento caso o navio 
            não caiba dentro do tabuleiro e também não há uma verificação se o navio de fato está inteiro(sem espaços entre os 3). */
            
        }
        printf("\n");
    }




return 0;
}
