#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b-a==c-b)
    printf("PA\n");
    else
    printf("não PA\n");
}


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
   }else{
       printf("a progressão não é aritmética");
   }
}
