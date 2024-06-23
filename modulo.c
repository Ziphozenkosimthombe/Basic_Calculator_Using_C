#include <stdio.h>

/**
 * @brief
 *
 * @param a
 * @param b
 * @return int
 */

int modulo(int a, int b) {
  if (b != 0) {
    int remainder = a % b;
    return remainder;
  } else {
    printf("Error: Modulo by zero is not allowed\n");
    return 0;
  }
}
