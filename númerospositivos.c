#include <stdio.h>
int main(){
    int a,b,c,todospositivos;
    scanf("%d%d%d",&a,&b,&c);
    if(a >= 0 && b >= 0 && c >= 0)todospositivos = 1;
    else todospositivos = 0;
    
    if (todospositivos == 1){
        printf("todos os números são positivos");
    }else{
        printf("pelo menos 1 dos números não e positivo");
        
    }
}
