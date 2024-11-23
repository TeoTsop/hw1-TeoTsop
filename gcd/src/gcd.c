//To compile use: "gcc -O3 -Wall -Wextra -Werror -pedantic -o gcd gcd.c"
#include <stdio.h>
#include <stdlib.h>

long long int gcd (long long int a, long long int b) {

  long long int c;

  if (a % b == 0) {
   if (b < 0){
    b = -b;
   }
   return b;
  }
  else {
   c = a % b;
   a = b;
   b = c;
   return gcd(a, b);
  }
}

int main (int argc, char **argv) {

  if (argc != 3) {
   printf ("Usage: ./gcd <num1> <num2>\n");
   return 1;
  }

  long long int a = atoi(argv[1]);
  long long int b = atoi(argv[2]);

  if (a == 0 || b == 0) {
   return 1;
  }

  printf("%lld\n", gcd(a, b));
  return 0;
}
