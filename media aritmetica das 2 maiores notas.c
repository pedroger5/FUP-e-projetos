int main(){
   float a,b,c,soma;
   printf("digite suas 3 notas:");
   scanf("%f%f%f",&a,&b,&c);
   if(a<b){float temp = a;a = b;b = temp;}
   if(a<c){float temp = a;a = c;c = temp;}
   if(b<c){float temp = b;b = c;c = temp;}
       soma = (a + b)/2;
       printf("a média das 2 maiores notas é:%f",soma);
   }


OU

int main(){
   float a,b,c,soma;
   printf("digite suas 3 notas:");
   scanf("%f%f%f",&a,&b,&c);
   if(a<b){float temp = a;a = b;b = temp;}
   if(a<c){float temp = a;a = c;c = temp;}
   if(b<c){float temp = b;b = c;c = temp;}
       soma = (a + b)/2;
       printf("a média das 2 maiores notas é:%f\n",soma);
       if(soma>=7){
           printf("Aprovado");
       }else{
           printf("Reprovado");
       }
   }
