// inittialize pointers
#include <stdio.h>

int main() {
  int a = 19;

  printf("value of variable: %d\n", a);
  printf("address of variable: %p\n", &a);

  int *ptr = &a;

  printf("value of pointer: %p\n", ptr);
  printf("address that it pointed: %d\n", *ptr);

  double b = 12.45;
  void *vptr = &b;

  printf("value of pointer: %f \n", *(double *)vptr);
  printf("address of pointer: %p \n", (double *)vptr);

  return 0;
}
