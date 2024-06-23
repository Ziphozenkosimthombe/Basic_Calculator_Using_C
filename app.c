#include "main.h"
#include <stdio.h>

int main() {
  int input1, input2;
  char operator;
  char exit = 'n'; // Initialize with a value other than 'q'

  printf("Welcome to C! Simple basic Calculator\n");
  printf("If you want to exit, press 'q' else press any key\n");

  while (exit != 'q') {
    printf("Enter first number: ");
    if (scanf("%d", &input1) != 1) {
      printf("Invalid input! Please enter a valid number.\n");
      while (getchar() != '\n')
        ; // Clear invalid input
      continue;
    }

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    if (scanf("%d", &input2) != 1) {
      printf("Invalid input! Please enter a valid number.\n");
      while (getchar() != '\n')
        ; // Clear invalid input
      continue;
    }

    if (operator== '+') {
      printf("%d + %d = %d\n", input1, input2, addition(input1, input2));
    } else if (operator== '-') {
      printf("%d - %d = %d\n", input1, input2, subtraction(input1, input2));
    } else if (operator== '*') {
      printf("%d * %d = %d\n", input1, input2, multiplication(input1, input2));
    } else if (operator== '/') {
      printf("%d / %d = %d\n", input1, input2, division(input1, input2));
    } else if (operator== '%') {
      printf("%d %% %d = %d\n", input1, input2, modulo(input1, input2));
    } else {
      printf(
          "Invalid operator! Please enter a valid operator (+, -, *, /, %%)\n");
    }

    printf(
        "If you want to exit, press 'q'. To continue, press any other key.\n");
    scanf(
        " %c",
        &exit); // Read the next character to decide whether to exit or continue
  }

  return 0;
}
