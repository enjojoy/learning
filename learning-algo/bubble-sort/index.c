#include <stdio.h>

void bubble_sort(int a[]);

int main() {
  int i;
  int arr[] = {3, 1, 4, 5, 2, 10, 8, 9, 6, 7};

  bubble_sort(arr);

  for (i = 0; i <= 9; i++) {
    printf("%d", arr[i]);
  }
  return 0;
}

void bubble_sort(int a[]) {
  int size = 10;
  int i, j, s;
  for (i = 0; i < size; ++i) {
    for (j = 0; j < size - 1 - i; ++j) {
      if (a[j] > a[j + 1]) {
        s = a[j];
        a[j] = a[j + 1];
        a[j + 1] = s;
      }
    }
  }
}