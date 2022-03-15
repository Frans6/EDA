#include <stdio.h>
#include <stdlib.h>

void movex (char *contx, int i){
    if(contx[i] != '\0'){
        if(contx[i] != 'x'){
            printf("%c", contx[i]);
            movex(contx, i + 1);
        }
        else{
            movex (contx, i + 1);
            printf ("%c", contx[i]);
        }
    }
}


int main()
{
    char contxs [101];

    scanf(" %s", contxs);

    movex (contxs, 0);
    printf("\n");

    return 0;
}
