#include <stdio.h>

int main()
{
   int a,b,c,maior;
   scanf("%d%d%d", &a,&b,&c);
   if(a>b){
       if(a>c){
           maior = a;
           
       }else{
           maior = c;
       }
   }else{
       if(b>c){maior=b;
   }else{
       if(b>c){maior=b;
   }else{maior = c;
   }
  }
    
  }
  printf("esse é o maior número:%d",maior);
  return 0;
}

OU

maior=a;
if(b>maior) maior=a;
if(c>maior) maior=c;
