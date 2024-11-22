#include <stdio.h>

int main(){
  // Arithmetic operators in C
  // + (addition)
  // - (subtraction)
  // * (multiplication)
  // / (division)
  // % (modulus)
  // ++ (increment)
  // -- (decrement)

  int x = 5;
  int y = 2;

  // Addition
  int a = x + y;  // 5 + 2 = 7
  // Subtraction
  int b = x - y;  // 5 - 2 = 3
  // Multiplication
  int c = x * y;  // 5 * 2 = 10
  // Division (integer result)
  int d = x / y;  // 5 / 2 = 2 (integer division truncates the decimal)
  // Division with float result
  float e = x / y;  // 5 / 2 = 2 (as integer, but stored as float, still results in 2)
  // To get a float result, cast one operand to float
  float f = x / (float)y;  // 5 / 2.0 = 2.5 (float result)
  // Modulus (remainder after division)
  int h = x % y;  // 5 % 2 = 1 (remainder when 5 is divided by 2)

  // Increment and Decrement operators
  x++;  // Increment x by 1 (x = 6)
  y--;  // Decrement y by 1 (y = 1)

  // Printing the results
  printf("Addition: %d + %d = %d\n", x, y, a);  // 7
  printf("Subtraction: %d - %d = %d\n", x, y, b);  // 3
  printf("Multiplication: %d * %d = %d\n", x, y, c);  // 10
  printf("Division (integer): %d / %d = %d\n", x, y, d);  // 2
  printf("Division (float): %d / %d = %.2f\n", x, y, e);  // 2.0
  printf("Division with float cast: %d / %d = %.2f\n", x, y, f);  // 2.5
  printf("Modulus: %d %% %d = %d\n", x, y, h);  // 1
  printf("Incremented x: %d\n", x);  // 6
  printf("Decremented y: %d\n", y);  // 1

  return 0;
}
