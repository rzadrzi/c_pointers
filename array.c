// pointers in array
#include <limits.h>
#include <stdio.h>

#define SIZE 4

void inputArray(int *arr, int size) {
  int i;

  for (i = 0; i < size; i++) {
    printf("Insert new value in index[%d] ", i + 1);
    scanf("%d", &arr[i]);
  }
}

void displayArray(int *arr, int size) {
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

void minMax(int *arr, int size, int *min, int *max) {
  int i;
  *min = arr[0];
  *max = arr[0];

  for (i = 0; i < size; i++) {
    if (arr[i] > *max) {
      *max = arr[i];
    }

    if (arr[i] < *min) {
      *min = arr[i];
    }
  }
}

int sum_array(int *ptr, int size) {
  int sum = 0;
  int i;
  for (i = 0; i < size; i++) {
    sum = sum + ptr[i];
  }
  return sum;
}

void average(int *arr, int size, double *avg) {
  double sum = (double)sum_array(arr, size);
  *avg = sum / size;
}

int main() {

  int arr[SIZE];
  int key = 12;
  int min, max;
  double avg;

  inputArray(arr, SIZE);
  displayArray(arr, SIZE);
  average(arr, SIZE, &avg);

  printf("sum of value: %d\n", sum_array(arr, SIZE));
  printf("Average: %f\n", avg);

  minMax(arr, SIZE, &min, &max);

  printf("min: %d, max: %d\n", min, max);
  return 0;
}
