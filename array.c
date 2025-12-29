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

int main() {
  int grades[3] = {1, 2, 3};

  printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
  printf("%ld\n", sizeof(int));

  int sum = sum_array(grades, 3);

  printf("sum of value: %d\n", sum);

  return 0;
}
