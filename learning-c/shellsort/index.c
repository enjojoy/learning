#include "stdio.h"

void shellsort(int v[], int n);

int main() {
  int arr[] = {1, 4, 6, 2, 3, 7, 9, 10, 8, 5};
  int n = 10;
  int i;

  shellsort(arr, n);
  for (i = 0; i < n; ++i) {
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}

void shellsort(int v[], int n) {
  int gap, i, j, temp;

  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
    }
  }
}
