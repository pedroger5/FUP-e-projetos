#include <stdio.h>

int main()
{
   int n,fator,linha,coluna,númerosdacoluna = 4;
  printf("digite o valor requisitado:");
   scanf("%d",&n);
   
   fator = n/númerosdacoluna;
   if(númerosdacoluna == 4){
        if(n % númerosdacoluna == 0){
       coluna = 0;
       linha = fator;
        }
   }
if(númerosdacoluna == 4 ){
       if(n % númerosdacoluna == 1)
       coluna = 1;
       linha = fator;
       
   }
   if(númerosdacoluna == 4){
       if(n % númerosdacoluna == 2)
       coluna = 2;
       linha = fator;
       
   }
   if(númerosdacoluna == 4){
       if(n % númerosdacoluna == 3)
       coluna = 3;
       linha = fator;
       
   }
   printf("a sua posição é (%d,%d)",linha,coluna);
    return 0;
}
