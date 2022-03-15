#include <stdio.h>

unsigned long long int buscaBinaria(unsigned long long int *v,unsigned long long int n, double x){
    int e,d,m;
    e=-1;
    d=n;
    while(e<d-1){
        m=(e+d)/2;
        if (v[m]==x) return m;
        if(v[m]<x)e=m;
        else d=m;
    }
    return d;
}

int main(){
    unsigned long long int c,x,y,n,p,pont=0;
    double v;
    unsigned long long int circ[100000];
    scanf("%llu%llu",&c,&n);
    for(int i=0; i<c; i++){
      scanf("%llu",&circ[i]);
      circ[i] *= circ[i];
    }
    for(int i=0;i<n;i++){
        scanf("%llu%llu",&x,&y);
        v = (x*x)+(y*y);
        p = buscaBinaria(circ,c,v);
        pont+=c-p;
    }
    printf("%llu\n",pont);
    return 0;
}
