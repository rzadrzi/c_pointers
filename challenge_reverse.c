// Challenge reverse
#include <stdio.h>

#define SIZE 5

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
    if (i != size) {
      printf(", ");
    }
  }
  printf("}\n");
}

int reverse(int *arr, int size) {

  int revese[size];
  int i;

  return 0;
}

int main() {

  int arr[SIZE] = {1, 2, 3, 4, 5};
  printArray(arr, SIZE);
}
