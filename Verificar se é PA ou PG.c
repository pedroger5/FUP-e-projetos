#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c;
  printf("digite o primeiro termo da progressão:");
  scanf("%d",&a);
  printf("digite o segundo termo da progressão:");
   scanf("%d",&b);
  printf("digite o terceiro termo da progressão:");
   scanf("%d",&c);
  
   if(b-a==c-b || b-a == 2*c-a){
   
   printf("a progressão é aritmética");
   }else if(b %a == 0 && c %b == 0){
       printf("a progressão é geométrica");
       }else{
       printf("a progressão não é aritmética nem geométrica");
   }
}
