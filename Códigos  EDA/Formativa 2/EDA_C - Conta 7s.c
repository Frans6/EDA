#include <stdio.h>
#include <stdlib.h>

int conta = 0;

int iguais(char num[]){
    int i = 0;

    if (num[i] == NULL){
        return 0;
    }
    if (num[i] == '7'){
        conta = conta + 1;
        return iguais(&num[1]);
    }else{
        return iguais(&num[1]);
        }
}

int main()
{
    char num[100];
    scanf("%s", &num);

    iguais(num);
    printf("%d", conta);

    return 0;
}
