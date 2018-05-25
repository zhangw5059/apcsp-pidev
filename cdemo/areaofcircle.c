#include<stdio.h>
#include<math.h>


float areaOfCircle(float r) {
  return M_PI*r*r;
}

int main() {
  for (float i = 3.5; i<=12.5; i+=1) {
    printf("Area of a circle with radius %f is %f\n", i, areaOfCircle(i));
  }
  return 0;
}
