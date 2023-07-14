#include <stdio.h>

int main(void) {
  char ch = '0';
  int i = 1;

  while (i <= 15) {
    putchar(ch);
    ch++;
    if (i == 10) {
      ch = 'a';
    }
    i++;
  }

  putchar('\n');

  return 0;
}

