#include <math.h>
#include <stdio.h>

int crystal_ball(int a[], int size);

int main() {
  int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", crystal_ball(arr, size));

  return 0;
}

int crystal_ball(int a[], int size) {
  int jmpAmount = floor(sqrt(size));
  int i = jmpAmount;
  int j;

  for (; i < size; i += jmpAmount) {
    if (a[i]) {
      break;
    }
  }
  i -= jmpAmount;
  for (j = 0; j < jmpAmount && j < size; ++j, ++i) {
    if (a[i]) {
      return i;
    }
  }
  return -1;
}