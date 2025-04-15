#include <stdio.h>
#include <math.h>
//Escreva um programa que leia seis numeros inteiros ´ d1, m1, a1, d2, m2, a2, representando
//duas datas (d1/m1/a1 e d2/m2/a2), e informe qual delas ´e a mais recente.
int main(){
  int d1,m1,a1,d2,m2,a2;
 printf("digite o dia 1:");
 scanf("%d",&d1);
   printf("digite o mês 1:");
   scanf("%d",&m1);
   printf("digite o ano 1:");
    scanf("%d",&a1);
   printf("digite o dia 2:");
     scanf("%d",&d2);
   printf("digite o mês 2:");
   scanf("%d",&m2);
   printf("digite o ano 2:");
    scanf("%d",&a2);
    
if(a1<a2){
    printf("primeira data é mais recente ");
}else if (a1==a2 && m1<m2){
    printf("primeira data é mais recente");
}else if(m1==m2 && d1<d2){
 printf("primeira data é mais recente");   
}else if(a1==a2 && m1==m2 && d1==d2){
printf("as duas datas são iguais");

}else{
    printf("segunda data é mais recente");
    
}

}

OU

int main() {
    int d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data (dia mês ano): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dia mês ano): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    int data1 = a1 * 10000 + m1 * 100 + d1;
    int data2 = a2 * 10000 + m2 * 100 + d2;

    if(data1 > data2)
        printf("A primeira data é mais recente.");
    else if(data2 > data1)
        printf("A segunda data é mais recente.");
    else
        printf("As datas são iguais.");

    return 0;
}
