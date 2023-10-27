#include "stdio.h"

int lower(int c);

int main() {

  int a;
  a = 'C';

  printf("%c\n", lower(a));
  return 0;
}
/* convert c to lower case, ASCII only */
int lower(int c) {

  //   if (c >= 'A' && c <= 'Z')
  //     return c + 'a' - 'A';
  //   else
  //     return c;

  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}