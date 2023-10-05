#include <stdio.h>


int main() {

  char operator;
  int input1;
  int input2;

  int inputs = scanf("%d %c %d", &input1, &operator, &input2);

  if (inputs == 3) {
    if (operator == '+') printf("Result: %d", input1 + input2);
    if (operator == '-') printf("Result: %d", input1 - input2);
    if (operator == '*') printf("Result: %d", input1 * input2);
    if (operator == '/') printf("Result: %d", input1 / input2);
  } else {
    puts("There are not enough inputs.");
  }
  
}


//KRFX