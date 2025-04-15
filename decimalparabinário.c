#include <stdio.h>
#include <math.h>
//Escreva um programa que receba quatro d´ıgitos binarios ´ b3, b2, b1, b0 e exiba o numero ´
//decimal correspondente
 int main(){
     int b3,b2,b1,b0,número;
     printf("digite os 4 bits(b3,b2,b1,b0:");
     scanf("%d%d%d%d",&b3,&b2,&b1,&b0);
     número = 8*b3 + 4*b2 + 2*b1 + 1*b0;
     printf("esse é o binário em decimal:%d",número);
 }



 int main(){
     int b3,b2,b1,b0,número;
     printf("digite os 4 bits(b3,b2,b1,b0:");
     scanf("%d%d%d%d",&b3,&b2,&b1,&b0);
     if (b3>1||b3<0 || b2>1|| b2<0 || b1>1 || b1<0 || b0>1 || b0<0 ){
         printf("número não binário inserido");
         return 0;
     }else{
     número = 8*b3 + 4*b2 + 2*b1 + 1*b0;
     printf("esse é o binário em decimal:%d",número);
     }
 }
