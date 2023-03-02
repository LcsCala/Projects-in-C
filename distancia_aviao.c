//gcc 07.c -o 07 -std=c99 -lm -------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

//h = distancia * (sen(x))

int main(){
int x, distancia;

 printf("Seja bem vindo a calculadora de altura alcançada :)\n"); 
 printf("Para calcular a altura primeiro insira o angulo em seno que o avião estava inclinado\n");
 printf("Lembrando que esse valor tem que ser entre 0 e 45°\n\n");
  
  do{
  scanf("%d", &x);
    printf("Escreva um valor de seno entre 0 e 45°\n");
    }while(x < 0 || x > 46);

  float gr = sin (x);
  
  printf("Agora escreva a distância percorrida.\n");
  scanf("%d", &distancia);

  int alcance = distancia * gr;
  int altura = abs(alcance);

  printf("Bom. A altura alcançada pelo avião foi de %dkm acima do chão\n\n", altura);
  
  //printf("o valor de sen é: %.1f", gr);
  
  return 0; 
}