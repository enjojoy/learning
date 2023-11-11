#include <stdio.h>

#define MAXLEN 10000
int strlen1(char *s);

int main() {
  char a[MAXLEN] = "Hello world";
  printf("%d\n", strlen1(a));
  return 0;
}
int strlen1(char *s) {
  int n;
  for (n = 0; *s != '\0'; s++)
    n++;
  return n;
}