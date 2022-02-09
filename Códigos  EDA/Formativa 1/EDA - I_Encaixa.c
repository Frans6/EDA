#include <stdio.h>

int encaixa(int a, int b) {

  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return 1;
  else
    return 0;

}

