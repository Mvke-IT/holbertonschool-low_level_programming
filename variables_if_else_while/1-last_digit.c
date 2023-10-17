int main(void) {
  int n, lstd;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  // Check if n is negative.
  if (n < 0) {
	  n = -n;
  }
lstd = n % 10;
printf("Last digit of %d is %d", n, lstd);
if (lstd > 5) {
	  printf(" and is greater than 5\n");
  } else if (lstd == 0) {
	  printf(" and is 0\n");
  } else if (lstd < 6 && lstd != 0) {
	  printf(" and is less than 6 and not 0\n");
  }
  return 0;
}
