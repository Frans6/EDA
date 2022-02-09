# include <stdio.h>
# include <stdlib.h>

int main ()
{   int altura, i, j, x = 1;
    scanf ("%d", &altura);

    if(altura <= 100){
        for (i = 1; i <= altura; i++){
            for(j = 1; j <= i; j++){
                if(x <= 9){
                printf("0%d ", x);
                }

                if(x > 9){
                printf("%d ", x);
                }
            }
        x++;
        printf ("\n");
        }
    }

    printf ("\n");
    x = 0;
        for (i = 1; i <= altura; i++){
            for(j = 1; j <= i; j++){
                if(x < 9){
                printf("0%d ", x = x + 1);
                }

                else{
                printf("%d ", x = x + 1);
                }
            }
        x = 0;
        printf ("\n");
        }

    return 0;
}
