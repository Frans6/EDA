# include <stdio.h>
# include <stdlib.h>

int main ()
{   int n, i, nums[10000], soma = 0, media = 0, x = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < n; i++){
        soma = soma + nums[i];
    }

    media = soma/n;

    for(i = 0; i < n; i++){
        if(media < nums[i]){
            printf("%d ", nums[i]);
            x++;
        }
    }
    if (x == 0){
        printf("0");
    }

    return 0;
}
