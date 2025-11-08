#include <stdio.h>



int main()
{
    int coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tabuleiro[10][10] = {0};

    

    

    //Navio na horizontal
    for(int s = 0, pi1, pi2; s < 3; s++){

        int pi1 = 9; // ponto inicial 1 = i ou y 
        int pi2 = 3; // ponto inicial 2 = j ou x

        if((pi2 > 9) || (pi1 > 9) || (pi1 < 0) || (pi2 < 0)){//lógica para impedir a entrada de qualquer valor maior que a matriz
            printf("Erro Crítico!, entrada inválida.");
            return 1;
        }
        if(pi1 <= 7){ //lógica para tentar impedir que o navio saia do tabuleiro
            tabuleiro[pi1 + s][pi2] = 3; //lógica para a impressão do navio na horizontal
        }else{ 
            tabuleiro[pi1 - s][pi2] = 3;  
        }
        
    }

    //Navio na vertical
    for(int s = 0, pi1, pi2; s < 3; s++){
        
        int pi1 = 2; // ponto inicial 1 = i ou y 
        int pi2 = 7; // ponto inicial 2 = j ou x

        if((pi2 > 9) || (pi1 > 9) || (pi1 < 0) || (pi2 < 0)){
            printf("Erro Crítico!, entrada inválida.");
            return 1;
        }
        if(pi2 <= 7){
        tabuleiro[pi1][pi2 + s] = 3; //lógica para a impressão do navio na vertical
    } else{
         tabuleiro[pi2][pi2 - s] = 3;
    }} 


    //Navio na diagonal principal
    for(int s = 0, pi1, pi2; s < 3; s++){
        
        int pi1 = 3; // ponto inicial 1 = i ou y 
        int pi2 = 3; // ponto inicial 2 = j ou x

        if((pi2 > 9) || (pi1 > 9) || (pi1 < 0) || (pi2 < 0)){
            printf("Erro Crítico!, entrada inválida.");
            return 1;
        }
        
        tabuleiro[pi1 + s][pi2 + s] = 3; //lógica para a impressão do navio na diagonal principal
    
         
    } 


    //Navio na diagonal secundária
    for(int s = 0, d = 0, pi1, pi2; s < 3; s++){
        
        int pi1 = 7; // ponto inicial 1 = i ou y 
        int pi2 = 7; // ponto inicial 2 = j ou x

        if((pi2 > 9) || (pi1 > 9) || (pi1 < 0) || (pi2 < 0)){
            printf("Erro Crítico!, entrada inválida.");
            return 1;
        }
        tabuleiro[pi1 + s][pi2 - s] = 3; //lógica para a impressão do navio na diagonal secundária
    }
    
         
    



    printf("*** Batalha Naval ***\n");
    printf("_____________________\n\n"); //Impressão da Interface
    printf("  ");
    for (int y = 0; y < 10; y++) //Cabeçalho do Tabuleiro
    {
        printf(" %c", coluna[y]);
    }

    printf("\n");

    for (int x = 0; x < 10; x++) //Impressão da coluna numérica
    {
        printf("%2d ", linha[x]);

        for (int y = 0; y < 10; y++) 
        {
            printf("%d ", tabuleiro[y][x]); //Impressão da água e dos navios
            
        }
        printf("\n");
    }

  /*Problemas encontrados:
  Não consegui encontrar uma solução para que os navios não sejam colocados nas mesmas casas, se atravessando no processo
  Uma solução precária para a saída do navio no tabuleiro foi adotada, mas com certeza há maneiras melhores de fazê-la.*/


return 0;
}