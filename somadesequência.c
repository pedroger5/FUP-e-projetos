#include <stdio.h>
#define N 10
int L[N] = {1,2,3,4,5,6,7,8,9};
int soma;
int main(){
int i;
soma = 0;
for (i=0;i<N;i++){
    soma+=L[i];
}
printf("essa é a soma dos números:%d",soma);

  

    return 0;
}
