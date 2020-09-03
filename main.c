// Author: Dymea Schippers dxs5940@psu.edu
// Collaborator: Tyler Ciuca tmc6093@psu.edu
// Collaborator: Chetan Mitra czm5805@psu.edu
// Collaborator: Jian Hong WOng jpw6087@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp= readline("Enter the temperature in celsius: \n");
  double celsius = atof(temp);
  double fahrenheit = 1.8 * celsius + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, fahrenheit);
  return 0;
}