#include <stdio.h>
#include <stdlib.h>

void ordena(int *vetor, int N)
{
    int i = 0, j = 0, aux = 0;

    while (i < N)
    {
        aux = vetor[i];
        for (j = i; (j > 0) && (aux < vetor[j - 1]); j--)
        {
            vetor[j] = vetor[j - 1];
        }

        vetor[j] = aux;
        i++;
    }
}
int main()
{
    int list[1001], n = 0;

     while (scanf("%d", &list[n]) != EOF) {
        n++;

        ordena(list, n);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;
}
