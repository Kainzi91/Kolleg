#include <stdio.h>

int main() {
  char line[20];
  int number;

  printf("Enter an integer between 1 and 6 (inclusive): ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &number);
  printf("You've entered the number %d.\n", number);

  return 0;
}
