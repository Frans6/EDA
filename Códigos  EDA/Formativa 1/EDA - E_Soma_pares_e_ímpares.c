# include <stdio.h>
# include <stdlib.h>

int main ()
{   int num[50], i = 0, somapar = 0, somaimpar = 0;

    while(num[i] != 0){
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0){
            somapar = somapar + num[i];
        }else{
            somaimpar = somaimpar + num[i];
        }
    }

    printf("%d %d\n", somapar, somaimpar);

    return 0;
}
