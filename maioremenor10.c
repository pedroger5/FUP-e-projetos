#include <stdio.h>

int main(){
   int num,i,maior,menor;
   printf("digite o primeiro número:");
   scanf("%d",&num);
   menor = num;
   maior = num;
   for(i=2;i<=10;i++){
       printf("digite o %d número:",i);
       scanf("%d",&num);
       if(num>maior)maior = num;
       if(num<menor)menor = num;
   }
   printf("esse é o maior número : %d\n",maior);
   printf("esse é o menor número : %d",menor);
    return 0;
}
