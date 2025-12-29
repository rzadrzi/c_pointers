// pointers in array
#include <limits.h>
#include <stdio.h>

int sum_array(int arr[], int size) {
  int sum = 0;
  int i;
  for (i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}
int sum_array_by_pointer(int *ptr, int size) {
  int sum = 0;
  int i;
  for (i = 0; i < size; i++) {
    sum = sum + ptr[i];
  }
  return sum;
}

int main() {
  int grades[3] = {1, 2, 3};

  printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
  printf("%ld\n", sizeof(int));

  int sum = sum_array(grades, 3);
  printf("sum of value: %d\n", sum);

  int sum_by_ptr = sum_array_by_pointer(grades, 3);
  printf("sum of values using pointer: %d\n", sum_by_ptr);

  return 0;
}
