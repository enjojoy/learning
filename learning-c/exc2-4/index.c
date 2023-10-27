#include "stdio.h"

void squeeze(char s1[], char s2[]);

int main() {
  char s1[] = "hello how are you doing";
  char s2[] = "l";
  squeeze(s1, s2);
  printf("%s\n%s\n", s1, s2);
  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i, k, j;

  for (i = k = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        break;
      }
    }
    if (s2[j] == '\0') {
      s1[k++] = s1[i];
    }
  }
  s1[k] = '\0';
}