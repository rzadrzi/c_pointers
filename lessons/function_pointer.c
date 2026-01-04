#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *createArray() {
  int i;
  static int newArray[SIZE];
  printf("Enter %d element to your array.\n", SIZE);

  for (i = 0; i < SIZE; i++) {
    printf("Add integer number in index %d: ", i + 1);
    scanf("%d", &newArray[i]);
  }

  return newArray;
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

int main(int argc, char *argv[]) {
  int *arr;
  arr = createArray();

  printArray(arr, SIZE);

  return EXIT_SUCCESS;
}
