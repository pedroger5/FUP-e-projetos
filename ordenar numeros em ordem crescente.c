#include <stdio.h>
#include <math.h>
int main(){
   int a,b,c;
   printf("digite 3 números:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b){int temp = a;a = b;b = temp;}
   if(a>c){int temp = a;a = c;c = temp;}
   if(b>c){int temp = b;b = c;c = temp;}
       printf("a ordem crescente é: %d\n%d\n%d\n",a,b,c);
   }
