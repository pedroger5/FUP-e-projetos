#include <stdio.h>
#include <math.h>
int main(){
    int n,b3,b2,b1,b0;
    printf("insira o número decimal de 1 a 15:");
    scanf("%d",&n);
    if(n>15||n<1){
        printf("número excede os limites");
        return 0;
    }else{
    b3 = n / 8;
    n= n % 8;
    b2 = n / 4 ;
    n = n %4;
    b1 = n / 2;
    n = n % 2;
    b0 = n;
    printf("essa eh a sequencia binária:%d%d%d%d",b3,b2,b1,b0);
    }
    
}
