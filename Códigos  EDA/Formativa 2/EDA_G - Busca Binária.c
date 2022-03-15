#include <stdio.h>

int busca_binaria(int *v, int n, int x){
    int e = -1, d = n, m, total = 0;

    while(e<d-1){
        m = (e + d)/2;

        if(v[m] < x){
            e = m;
            total = m + 1;
        }
        else
            d = m;
    }
    return total;
}

int main(){
    int n, m, i, j, x;

    scanf("%d%d", &n, &m);

    int v[n];
    int aux[m];

    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for(j = 0; j < m; j++){
        scanf("%d", &x);
        aux[j] = busca_binaria(v, n, x);
    }

    for(j = 0; j < m; j++)
        printf("%d\n", aux[j]);

    return 0;
}
