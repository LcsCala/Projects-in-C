#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


/* A ideia é fazer um jogo que escolha um número aleatório e você tem
tem que adivinhar qual é o número escolhido*/

int main(){
    system("clear");
    char nome [ 10 ] = {'\0'};

    /* Aqui vai ser a apresentação do programa*/
    printf("*******************\n");
    printf("* CAT GUESS GAME  *\n");
    printf("*******************\n");
    printf("Olá, qual é o seu nome?\n");
    scanf("%s", nome);
    printf("\nOtimo, seja bem vindo a um jogo de adivinhacao, %s!\n", nome);
    getchar();
    getchar();
    system("clear");

    printf("*******************\n");
    printf("* CAT GUESS GAME  *\n");
    printf("*******************\n");
    printf("O jogo é bem simples, %s, eu vou escolher um numero e voce tem que acertar qual é.\n \n", nome);
    getchar();

    printf("Eu vou te dando dicas ate que voce acerte o numero escolhido.");
    getchar();
    printf("Espero que se divirta :)\n");
    getchar();
    system("clear");
    /*fim da apresentação*/




        /*aqui vai o ínicio do sistema*/
        printf("*******************\n");
        printf("* CAT GUESS GAME  *\n");
        printf("*******************\n");
        
        int nivel;
        printf("Escolha a dificuldade do jogo:\n");
        printf("(1)Fácil  (2)Médio  (3)Difícil\n");
        scanf("%d", &nivel);

        int numero_tentativas;

        switch(nivel){
          case 1:
            numero_tentativas = 10;
            break;
          
          case 2:
            numero_tentativas = 7;
            break;

          default:
            numero_tentativas = 5;
            break;
        }

        system("clear");
        printf("*******************\n");
        printf("* CAT GUESS GAME  *\n");
        printf("*******************\n");

        int segundos = time(0);
        srand (segundos);

        int numero_grande = rand();
        int numero_secreto = numero_grande % 1000;

        for(int i = 1; i <= numero_tentativas ; i++){
        
        printf("Tentativa %d de %d\n", i, numero_tentativas);
        printf("Vamos lá, digite um número de 0 a 1000\n");
        int chute;
        scanf("%d",&chute);

        if (chute < 0 || chute > 1000){
            printf("Chute apenas números entre 0 e 1000\n\n");
            i--;

            continue;
        }

            int diferenca = numero_secreto - chute;
            int diferenca_neg = chute - numero_secreto;

            if(numero_secreto == chute)
              {
              printf("Booa, %s!!\nVocê acertou.\n\n", nome);
              printf("                _                                \n");
              printf("                \`*-.                            \n");
              printf("                 )  _`-.                         \n");
              printf("                .  : `. .                        \n");
              printf("                : _   '  \                       \n");
              printf("                ; *` _.   `*-._                  \n");
              printf("                `-.-'          `-.               \n");
              printf("                  ;       `       `.             \n");
              printf("                  :.       .        \            \n");
              printf("                  . \  .   :   .-'   .           \n");
              printf("                  '  `+.;  ;  '      :           \n");
              printf("                  :  '  |    ;       ;-.         \n");
              printf("                  ; '   : :`-:     _.`* ;        \n");
              printf("          [bug] .*' /  .*' ; .*`- +'  `*'        \n");
              printf("                `*-*   `*-*  `*-*'               \n\n");
              break;
              }
            
            else
              /*Aqui é onde tem que dizer o quão distante está da resposta*/{ 
                int sobra;
                if(numero_secreto > chute && diferenca > 9) {

                      if(diferenca > 499){
                        sobra = 500;
                      }

                      else if(diferenca > 249 && diferenca < 500){
                        sobra = 250;
                      }

                      else if(diferenca > 99 && diferenca < 250){
                        sobra = 100;
                      }

                      else if (diferenca >= 20 && diferenca <= 50){
                        sobra = 50;
                      }

                      else if (diferenca > 9 && diferenca < 20){
                        sobra = 10; 
                      } 
                  printf("Tente um número de %d unidades a mais.\n\n",sobra);  
                }
                if (diferenca > 0 && diferenca < 10){
                  printf("Está muito perto, tente um número maior\n\n");
                }              
                
                if(numero_secreto < chute && diferenca_neg > 9) {
                    
                      if(diferenca_neg > 499){
                        sobra = 500;
                      }

                      else if(diferenca_neg > 249 && diferenca_neg < 500){
                        sobra = 250;
                      }

                      else if(diferenca_neg > 99 && diferenca_neg < 250){
                        sobra = 100;
                      }

                      else if (diferenca_neg >= 20 && diferenca_neg <= 50){
                        sobra = 50;
                      }

                      else if (diferenca_neg > 9 && diferenca_neg < 20){
                        sobra = 10; 
                      } 
                  printf("Tente um número de %d unidades a menos.\n\n",sobra);                   
                }
              
                if (diferenca_neg > 0 && diferenca_neg < 10){
                  printf("Está muito perto, tente um número menor\n\n");
                }
             }
          }
    
  printf("Fim de jogo!\n");
return 0;
}