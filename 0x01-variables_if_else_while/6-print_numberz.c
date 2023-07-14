#include <stdio.h>

int main(void) {
  char ch = '0';
  int i = 1;

  while (i <= 9) {
    putchar(ch);
    ch++;
    i++;
  }

  putchar('\n');

  return 0;
}

