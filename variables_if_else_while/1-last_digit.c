#include <stdlib.h>
#include <time.h>

int main(void) {
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  printf("Last digit of %d is ", n);
  switch (n % 10) {
    case 0:
      printf("and is 0\n");
      break;
    case 5 ... 9:
      printf("and is greater than 5\n");
      break;
    default:
      printf("and is less than 6 and not 0\n");
  }

  return 0;
}
