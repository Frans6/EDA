#include <stdio.h>
#include <stdlib.h>

double potenciacao(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * potenciacao(a, b - 1);
}

int main()
{
    int a, b;
    double res;
    // printf("Digite a base: ");
    scanf("%d", &a);
    // printf("Digite o expoente: ");
    scanf("%d", &b);

    if (a == 0 && b <= 0)
        printf("indefinido\n");
    else{
        if (b < 0)
            res = 1.0 / potenciacao(a, -b);
        else
            res = potenciacao(a, b);
        printf("%.3f\n", res);
    }

    return 0;
}