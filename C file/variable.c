#include <stdio.h>

int main(){
    /* 
    Variable = Allocated space in memory to store a value. 
    We refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains. 
    BUT we need to declare what type of data we are storing.
    */

  int x; // declaration
  x = 123; // initialization
  int y = 321; // declaration + initialization
  
  int age = 18;                 // integer
  float gpa = 2.00;             // floating point number
  char grade = 'C';             // single character
  char name[] = "Napoleon";     // array of characters (string)

  printf("Hello %s!\n", name);            // %s is for string
  printf("You are %d years old\n", age);  // %d is for decimal (integer)
  printf("Your grade is %c\n", grade);    // %c is for character
  printf("Your GPA is %f\n", gpa);        // %f is for float
  
  return 0;
}
