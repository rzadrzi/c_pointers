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

int find_if_key_in_array(int *arr, int size, int key) {
  int i;
  int val = -1;

  for (i = 0; i < size; i++) {
    if (arr[i] == key) {
      val = i;
    }
  }

  return val;
}

int findMax(int *arr, int size) {
  int max = arr[0];
  int i;

  for (i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

double average(int *arr, int size) {
  double sum = (double)sum_array_by_pointer(arr, size);
  double ave = sum / size;
  return ave;
}

int main() {
  int grades[SIZE] = {101, 225, 32, 41};

  printf("%d bits\n", (int)(CHAR_BIT * sizeof(void *)));
  printf("%ld\n", sizeof(int));

  int sum = sum_array(grades, SIZE);
  printf("sum of value: %d\n", sum);

  int sum_by_ptr = sum_array_by_pointer(grades, SIZE);
  printf("sum of values using pointer: %d\n", sum_by_ptr);

  int find = find_if_key_in_array(grades, SIZE, 1);
  printf("find it: %d\n", find);

  printf("Max: %d\n", findMax(grades, SIZE));

  printf("Average: %f\n", average(grades, SIZE));

  int new_arr[SIZE];

  inputArray(new_arr, SIZE);
  displayArray(new_arr, SIZE);
  return 0;
}
