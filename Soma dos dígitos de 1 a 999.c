#include 

int main() {
    int numero, soma = 0;

    printf("Digite um numero entre 1 e 999: ");
    scanf("%d", &numero);

    if (numero < 1 || //(anotação: ||="ou") numero > 999){   
(ANOTAÇÃO: COLOCAR ";" DEPOIS DE IF INDICA PRA LINGUAGEM C QUE O IF TERMINA ALI,PORTANTO O CODIGO ABAIXO SEMPRE SERIA EXECUTADO) 
        printf("Numero fora do intervalo!\n");
        return 0;
    }

    // Soma dos dígitos
    soma += numero % 10;     // unidade
    numero /= 10;
    soma += numero % 10;     // dezena
    numero /= 10;
    soma += numero % 10;     // centena

    printf("Soma dos digitos: %d\n", soma);

    return 0;
}
