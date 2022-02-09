# include <stdio.h>
# include <stdlib.h>

int posnaipe (char naipe){
    switch (naipe){
    case 'C': return 0;
    case 'E': return 1;
    case 'U': return 2;
    case 'P': return 3;
    }
}

int main ()
{   int carta, cartas[4][13], falta[4];
    char naipe;

    for(int i = 0; i < 4; i++){
        falta[i] = 13;
        for(int j = 0; j < 13; j++){
            cartas[i][j] = 0;
        }
    }

    //11P01C02C01U02U03U04U

    while (scanf("%d", &carta) > 0){
        naipe = getchar();

        cartas[posnaipe(naipe)][carta - 1]++;
        if(cartas[posnaipe(naipe)][carta - 1] > 1){
            falta[posnaipe(naipe)] = -1;
        }else{
            falta [posnaipe(naipe)]--;
        }
    }

    for (int i = 0; i < 4; i++){
        if(falta[i] < 0){
            printf("erro\n");
        }else{
            printf("%d\n", falta[i]);
        }
    }

    return 0;
}
