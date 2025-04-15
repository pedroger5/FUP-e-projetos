#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);

    
    scanf("%s", s);

    
    getchar();

   
    scanf("%[^\n]%*c", sen);  (OBS: "%[^\n]%*c" é digitar(%) até o espaço ([^\n]) e apaga o próprio espaço (%*c)

   
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
