#include <stdlib.h>
#include <stdio.h>

// -- escreva seu código abaixo dessa linha --- (e não altere esta linha)

int main() {
float pesox=1,x,pesoy=2,y,media;
  printf("defina os dois valores da média(x e y):\n");
  scanf("%f%f",&x,&y);
 
 if(pesox<=0 ||pesoy<=0||x<=0||y<=0){
printf("um ou mais valores inválidos\n");
  return 0;}
  if(x<y){
    float temp = pesoy;
    pesoy = pesox;
    pesox = temp;
  }
  media = (x*pesox+y*pesoy)/(pesox+pesoy);
  printf("essa é a média ponderada dos valores:%f",media);
  return 0;

}
