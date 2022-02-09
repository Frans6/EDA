# include <stdio.h>
# include <stdlib.h>

int main ()
{   int N, i = 0, total = 0;
    char gabarito[81];
    char respostas[81];

    scanf("%d", &N);
    scanf("%s", &gabarito[i]);
    scanf("%s", &respostas[i]);

    for (i = 0; i < N; i++){
        if(gabarito[i] == respostas[i]){
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}
