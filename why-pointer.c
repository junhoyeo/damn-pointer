#include <stdio.h>
int main() {
  int a = 5;
  int p = &a;
  printf("%d\n", p); // -310942164
  int *q = &a;
  printf("%d\n", q); // -310942164

  printf("%d\n", *(&a)); // 5
  // printf("%d\n", *p); // compile error!
  printf("%d\n", *q); // 5
}
