#include <stdio.h>

//10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

int main() {
  system("clear");
  
  int num;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &num);

  if(num > 999 && num < 10000){
     int a_milhar = num % 10000;
      int milhar = a_milhar/1000;

     int a_centena = num % 1000;
      int centena = a_centena / 100;

     int a_dezena = num % 100;
      int dezena = a_dezena / 10;

     int unidade = num % 10;

      printf("O número é decomposto em %d milhar(es), %d centena(s), %d dezena(s) e %d unidade(s)", milhar, centena, dezena, unidade);
     }

  else if(num > 99 && num < 1000){

     int a_centena = num % 1000;
      int centena = a_centena / 100;

     int a_dezena = num % 100;
      int dezena = a_dezena / 10;

     int unidade = num % 10;

      printf("O número é decomposto em %d centena(s), %d dezena(s) e %d unidade(s)", centena, dezena, unidade);
     }

  else if(num > 9 && num < 100){

     int a_dezena = num % 100;
      int dezena = a_dezena / 10;

     int unidade = num % 10;

      printf("O número é decomposto em %d dezena(s) e %d unidade(s)", dezena, unidade);
     }

  else if(num > -1 && num < 10){

     int unidade = num % 10;

      printf("O número é decomposto em %d unidade(s)", unidade);
     }
  
  return 0;
}