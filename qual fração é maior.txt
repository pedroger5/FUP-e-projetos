#include <stdio.h>
#include <math.h>
int main(){
    int p,q,r,s;
    printf("insira p,q,r,s:");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(q == 0 || s == 0){
        printf("fração indeterminada");
        return 0 ;
    }
    if (p*s>q*r){
        printf("a fração %d/%d é a maior",p,q);
    }else{
        printf("a fração %d/%d é a maior",r,s);
    }
   
}
