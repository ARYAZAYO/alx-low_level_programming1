#include <stdio.h>

int main(void) {
  int i = 0;
  int j = 1;

  while (i <= 9) {
    while (j <= 9) {
      putchar(i + '0');
      putchar(j + '0');
      if (i != 9 || j != 9) {
        putchar(',');
        putchar(' ');
      }
      j++;
    }
    j = 1;
    i++;
  }

  putchar('\n');

  return 0;
}

