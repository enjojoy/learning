#include "stdio.h"

int binary_search(int a[], int s, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int s = 7;
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", binary_search(arr, s, size));

  return 0;
}

int binary_search(int a[], int s, int size) {
  int lo = 0;
  int hi = size - 1;
  int m, v;
  do {
    m = lo + (hi - lo) / 2;
    v = a[m];

    if (v == s) {
      printf("%s\n", "Found!");
      return 1;
    } else if (v > s) {
      hi = m;
      printf("%s\n", "Your value is smaller");
    } else {
      lo = m + 1;
      printf("%s\n", "Your value is bigger");
    }
  } while (lo < hi);
  return 0;
}