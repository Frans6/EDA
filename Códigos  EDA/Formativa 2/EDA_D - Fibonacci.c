#include <stdio.h>

long int v[81];

long int fibonacci(int n) {

   if((n <= 2)  && v[n] == 0) {
      return v[n] = 1;
   }
   else if (v[n] == 0) {
      return v[n] = fibonacci(n-2) + fibonacci(n-1);
   }
}

/*int main() {
   int n;
   scanf("%d", &n);
   printf("%ld", fibonacci(n));
   return 0;
}
*/