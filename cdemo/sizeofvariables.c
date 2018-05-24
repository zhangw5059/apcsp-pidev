#include <stdio.h>

int main() {
  int a = 10;
  char b = 'A';
  float c = 1.0;
  double d = 1.0;
  unsigned int e = 7;
  short int f = 4;
  printf("a : %d\nb : %d\nc : %d\nd : %d\ne : %d\nf : %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
  return 0;
}
