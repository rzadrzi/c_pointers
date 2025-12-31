// Challenge reverse
#include <stdio.h>

#define SIZE 6

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int *arr, int size) {
  int i;
  printf("{");
  for (i = 0; i < size; i++) {
    printf("%d", arr[i]);
    if (i != size - 1) {
      printf(", ");
    }
  }
  printf("}\n");
}

void reverseArrIteration(int *arr, int size) {
  int i;
  for (i = 0; i < size / 2; i++) {
    swap(&arr[i], &arr[size - 1 - i]);
  }
}

void reverseArrRecursive(int *arr, int size) {
  if (size > 1) {
    swap(&arr[0], &arr[size - 1]);
    reverseArrRecursive(arr + 1, size - 2);
  }
}

int main() {

  int arr[SIZE] = {1, 2, 3, 4, 5, 6};
  printf("Before reverse: ");
  printArray(arr, SIZE);

  reverseArrIteration(arr, SIZE);
  printf("After iterative reverse: ");
  printArray(arr, SIZE);

  reverseArrRecursive(arr, SIZE);
  printf("Before recursive reverse: ");
  printArray(arr, SIZE);
}
