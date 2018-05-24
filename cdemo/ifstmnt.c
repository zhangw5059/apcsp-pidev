#include<stdio.h>

int main() {
  int a = 0;
  if (a == 0) {
    printf("a is equal to 0\n");
  }
  if (a != 1) {
    printf("a is not equal to 1\n");
  }
  if (a > -1 || a > 1) {
    printf("a is greater than -1 or greater than 1\n");
  }
  if (a >= 0 && a <= 1) {
    printf("a is between 0 and 1 inclusive\n");
  }
  if (!(a < -1)) {
    printf("a is not less than -1\n");
  }
  return 0;
}
