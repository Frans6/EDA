# include <stdio.h>
# include <stdlib.h>

int main ()
{   int b, t, bd, td, basetri, areat, arear, areatotal, dai;

    scanf("%d", &b);
    scanf("%d", &t);

    // eduardo mais a esquerda e daiane mais a direita

    bd = 160 - b;
    td = 160 - t;
    basetri = t - b;

    areat = (basetri * 70)/2;
    arear = b * 70;
    areatotal = arear + areat;
    dai = 11200 - areatotal;

    if(areatotal < dai){
        printf("2\n");
    }
    if(areatotal > dai){
        printf("1\n");
    }
    if(areatotal == dai){
        printf("0\n");
    }





    return 0;
}
