#include "stdio.h"

int any(char s1[], char s2[]);

int main() {
  char s1[] = "hello how are you doing";
  char s2[] = "so so";

  printf("%d\n", any(s1, s2));
  return 0;
}

int any(char s1[], char s2[]) {
  int i, k, j;

  for (i = k = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }
  s1[k] = '\0';
  return -1;
}