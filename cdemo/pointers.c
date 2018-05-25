#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);
  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n\n", &a);

  float d = 3.1416;
  float e = 2.7183;
  float* ptrd;
  float* ptre;
  ptrd = &d;
  ptre = &e;
  printf("The value is %d at %d and %d at %d\n",d,ptrd,e,ptre);
  float* temp = ptrd;
  ptrd = ptre;
  ptre = temp;
  printf("After switching pointers, d = %d and e = %d\n", d, e);
  return 0;
}
