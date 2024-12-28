#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20;
  printf("%d\n", x); //Corrected to avoid memory leak
  return 0;
}