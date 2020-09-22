#include <stdio.h>

int main(void) {
  // just as string
  puts("Maria Mustermann,\n0123456789,\nA");
  // with number as integer (padded to 10 digits with leading 0s)
  printf("%s,\n%010d,\n%c\n", "Maria Mustermann", 123456789, 'A');
  return 0;
}
