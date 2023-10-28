#include "stdio.h"
#include "time.h"

int binsearch(int x, int v[], int n);

int main() {
  clock_t start, end;
  double cpu_time_used;

  start = clock();

  int val = 4;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("%d\n", binsearch(val, arr, 10));
  end = clock();
  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("%f\n", cpu_time_used);

  return 0;
}

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid - 1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}