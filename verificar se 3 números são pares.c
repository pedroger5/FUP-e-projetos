#include <stdio.h>
int main (){
    int a,b,c,todospares;
    scanf("%d%d%d",&a,&b,&c);
    if(a % 2==0 && b % 2 ==0 && c % 2==0){
    todospares = 1;
    printf("os números são pares");
    return 0;
    }
    else
    todospares=0;
    printf("um ou mais números não são pares");
    
}

OUTROEXEMPLO

todos pares=1;
if(a % 2 == 1)todospares = 0;
if(b % 2 == 1)todospares = 0;
if(c % 2 == 1)todospares = 0;

EXEMPLO PARA EXISTIR PELO MENOS 1 PAR

int existepar = 0 ;
if(a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
existepar = 1;
