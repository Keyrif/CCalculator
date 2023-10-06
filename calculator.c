#include <stdio.h>


int main() {

  char operator;
  int input1;
  int input2;
  printf("> ");
  int inputs = scanf("%d %c %d", &input1, &operator, &input2);

  if (inputs != 3){
    printf("ERROR: Invalid number(s)!");
    return 0;
  }
  

  if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
    printf("> ");
    if (operator == '+') printf("Result: %d", input1 + input2); else if (operator == '-') {
      printf("Result: %d", input1 - input2);
    } else if (operator == '*') { 
      printf("Result: %d", input1 * input2);
    } else if (operator == '/') {
      printf("Result: %d", input1 / input2);
    }
  } else {
    puts("ERROR: There are not enough numbers or operator is invalid!");
  }
  
}

// KRFX