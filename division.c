#include <stdio.h>

/**
 * @brief
 *
 * @param a
 * @param b
 * @return int
 */

int division(int a, int b) {
  if (b != 0) {
    int quotient = a / b;
    return quotient;
  } else {
    printf("Error: Division by zero is not allowed\n");
    return 0;
  }
}
