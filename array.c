// pointers in array
#include <limits.h>
#include <stdio.h>

int main() {
  int grades[3];
  // grades = {1, 2, 3};
  //
  printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
  printf("%ld\n", sizeof(int));
  return 0;
}
