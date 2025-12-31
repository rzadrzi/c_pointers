// find second smallest value
#include <stdio.h>

#define SIZE 5

int findScondSmallest(int *arr, int size) {
  int min1 = 10000000;
  int min2 = 10000000;

  int i;

  for (i = 0; i < size; i++) {
    if (min1 > arr[i]) {
      min2 = min1;
      min1 = arr[i];
    } else if (min2 > arr[i]) {
      min2 = arr[i];
    }
  }
  return min2;
}

int main() {

  int arr[SIZE] = {12, 24, 36, 45, 58};
  int min2 = findScondSmallest(arr, SIZE);

  printf("Second Min: %d\n", min2);
}
