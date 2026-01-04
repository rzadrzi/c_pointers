#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int isArrayPalindrome(int *arr, int size) {
  if (size <= 1)
    return 1;

  if (arr[0] == arr[size - 1])
    return isArrayPalindrome(arr + 1, size - 2);

  return 0;
}

int main(int argc, char *argv[]) {
  int n[SIZE] = {1, 2, 2, 1};
  int r;

  r = isArrayPalindrome(n, SIZE);

  printf("%d\n", r);

  return EXIT_SUCCESS;
}
