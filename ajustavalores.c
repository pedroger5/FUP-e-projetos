#include <stdio.h>
void ajusta_valores(int*a,int*b){
    if(*a>*b){
        int temp = *a-*b;
        int z =*a+*b;
        *a = temp;
        *b = z;
    }else{
        int temp1 = *a;
        *a =*b;
        *b = temp1;
        
    }
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   ajusta_valores(&a,&b);
   printf("%d %d",a,b);

    return 0;
}
