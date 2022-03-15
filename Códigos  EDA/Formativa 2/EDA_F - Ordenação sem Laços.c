#include <stdio.h>

int indice(int *v, int n) {
  int i;
  if (n==1)
    return 0;
  i = indice(v, n-1);
  if (v[n-1] > v[i])
    return n-1;
  return i;
}

void troca(int *v, int i, int j){
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void ordena(int *v, int n){
  if(n>0){
    int i = indice(v,n);
    troca(v,i,n-1);
    ordena(v,n-1);
  }
}