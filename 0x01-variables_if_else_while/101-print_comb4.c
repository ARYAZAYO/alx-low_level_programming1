#include <stdio.h>

int main(void) {
  int i = 0, j = 1, k = 2;

  while (i <= 9) {
    while (j <= 9) {
      while (k <= 9) {
        if (i != j && i != k && j != k) {
          putchar(i + '0');
          putchar(j + '0');
          putchar(k + '0');
          if (i != 8 || j != 7 || k != 6) {
            putchar(',');
            putchar(' ');
          }
        }
        k++;
      }
      k = 2;
      j++;
    }
    j = 1;
    i++;
  }

  putchar('\n');

  return 0;
}

