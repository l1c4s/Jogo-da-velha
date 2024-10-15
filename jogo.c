
#include <stdio.h>

void imprime_matriz(char matriz[3][3]);
int verifica_matriz(char matriz[3][3]);

int main()
{
    char matriz[3][3],jogador1='X',jogador2='O';
    int i,j,coluna=0,linha=0,ganhou=0,rodada=0;
    
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           matriz[i][j]= ' ';
       }
   }
   
    imprime_matriz(matriz);
    
    while(rodada<9){
        printf("Primeiro jogador: digite a posicao na matriz para marcar\n");
        scanf("%d %d",&linha,&coluna);
        getchar();
        matriz[linha][coluna]=jogador1;
        imprime_matriz(matriz);
        ganhou = verifica_matriz(matriz);
        if(ganhou==1){
            printf("Jogado1 ganhou essa rodada\n");
            break;
        }
        
        printf("segundo jogador: digite a posicao na matriz marcar\n");
         scanf("%d %d",&linha,&coluna);
        getchar();
        matriz[linha][coluna]=jogador2;
        imprime_matriz(matriz);
        ganhou = verifica_matriz(matriz);
        if(ganhou==2){
            printf("Jogado2 ganhou essa rodada\n");
            break;
        }
    }

    return 0;
}


void imprime_matriz(char matriz[3][3]){
    
    printf("%c   |%c   |%c   \n",matriz[0][0],matriz[0][1],matriz[0][2]);
    printf("_________________\n");
    printf("%c   |%c   |%c   \n",matriz[1][0],matriz[1][1],matriz[1][2]);
    printf("_________________\n");
    printf("%c   |%c   |%c   \n",matriz[2][0],matriz[2][1],matriz[2][2]);
    printf("_________________\n");
    return;
    
}

int verifica_matriz(char matriz[3][3]){
    
    int i,j,valor1=0,valor2=0,linha1=0,linha2=0;
    char n1= 'X', n2= 'O';    


    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){// inicio da verifacao das colunas
            
            if(matriz[i][j]==n1){
                valor1++;
                if(valor1==3){
                    return 1;
                    break;
                }
            }
            else if(matriz[i][j]==n2){
                valor2++;
                if(valor2==3){
                    return 2;
                    break;
                }
            }
            
        }//fim da verifcacao das colunas
     //inicio da verifacao das linhas
        
        if(matriz[i][j]==n1){
            linha1++;
            if(linha1==3){
                return 1;
                break;
                }
            }
        else if(matriz[i][j]==n2){
            linha2++;
            if(linha2==3){
                return 2;
                break;
                }
            }
        //fim da verifcacao das linhas
    }

       
    
    
}
