#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * By Kyth
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b) {
  unsigned int n = 0;
  int i;

  if (b == NULL) {
    return 0;
  }

  for (i = strlen(b) - 1; i >= 0; i--) {
    if (b[i] != '0' && b[i] != '1') {
      return 0;
    }

    n += (b[i] - '0') * pow(2, strlen(b) - 1 - i);
  }

  return n;
}
