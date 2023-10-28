#include "stdio.h"

int escape(char s[], char t[]);

int main() {
  char c[100];
  char t[] = "Hello \t here is a couple \t of tabs and \n new \n lines";
  printf("%s\n", t);

  escape(c, t);

  printf("%s\n", c);
  return 0;
}

int escape(char s[], char t[]) {
  int i, j;

  for (i = j = 0; t[i] != '\0'; i++) {
    switch (t[i]) {
    case '\n':
      s[j++] = '\\';
      s[j++] = 'n';
      break;
    case '\t':
      s[j++] = '\\';
      s[j++] = 't';
      break;
    default:
      s[j++] = t[i];
      break;
    }
  }
  s[j] = '\0';
}