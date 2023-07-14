#include <stdio.h>

int main(void) {
  char ch = 'a';

  for (int i = 0; i < 26; i++) {
    putchar(ch);
    ch++;
  }

  putchar('\n');
  ch = 'A';

  for (int i = 0; i < 26; i++) {
    putchar(ch);
    ch++;
  }

  return 0;
}

