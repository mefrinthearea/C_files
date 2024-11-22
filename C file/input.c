#include <stdio.h>

int main(){
  
  char name[25]; //max size of 25 bytes
  int age;

  /* scanf kind of inerse of printf. while printf is used to display something as an output, while scanf is used to read input */


  printf("\nWhat's your name?\n");  
  // scanf("%s", name);  - this only prints first name.
  fgets(name, 25, stdin); // now we can input full name with the last name and it will be in the output

  printf("\nHello %s, how are you?\n\n", name);  

  printf("How old are you?\n");
  scanf("%d", &age);  

  printf("\nYou are %d years old.\n", age); 
  return 0;
}
