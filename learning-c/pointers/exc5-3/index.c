#include <stdio.h>

void strcat1(char *s, char *t);

int main() {
  char s[128] = "Hello ";
  char t[] = "world!";
  strcat1(s, t);
  printf("%s\n", s);
  return 0;
}

void strcat1(char *s, char *t) {
  while (*s) {
    s++;
  }
  while ((*s++ = *t++)) {
    ;
  }
}