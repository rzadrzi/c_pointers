// Challenge
//
#include <stdio.h>

#define SIZE 5

int search(int *arr, int size) {
  int i;
  for (i = 1; i < size - 1; i++) {
    if (arr[i] == arr[i - 1] + arr[i + 1]) {
      return i;
    }
  }
  return -1;
}

int main() {
  printf("============= Good Neighbors =============\n");

  int arr[SIZE] = {1, 2, 3, 5, 4};

  int index = search(arr, SIZE);
  int value = -1;

  if (index > 0) {
    value = arr[index];
  }

  printf("Does it exists:\n\t index: %d\n\t value: %d\n", index, value);

  return 0;
}
