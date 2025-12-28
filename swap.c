// swap.c
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
  void *temp = malloc(size);
  memcpy(temp, a, size);
  memcpy(a, b, size);
  memcpy(b, temp, size);
}

int main() {
  int x = 5, y = 10;
  printf("Before swap: x = %d, y = %d\n", x, y);
  swap(&x, &y, sizeof(x));
  printf("After swap: x = %d, y = %d\n\n", x, y);

  double a = 23.34;
  double b = 18.12;

  printf("Before swap: a = %f, b = %f\n", a, b);
  swap(&a, &b, sizeof(a));
  printf("After swap: a = %f, b = %f\n\n", a, b);

  return 0;
}
