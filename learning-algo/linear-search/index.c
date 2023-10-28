#include "stdio.h"

int linear_search(int a[], int s, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int s = 7;
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", linear_search(arr, s, size));

  return 0;
}

int linear_search(int a[], int s, int size) {
  int i;
  for (i = 0; i < size; i++) {
    if (a[i] == s) {
      return 1;
    }
  }
  return 0;
}