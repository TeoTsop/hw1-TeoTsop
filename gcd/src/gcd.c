#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

  long long int c;

  if (argc != 3) {
   printf ("Usage: ./gcd <num1> <num2>\n");
   return 1;
  }

  long long int a = atoi(argv[1]);
  long long int b = atoi(argv[2]);

  if (a == 0 || b == 0) {
   return 1;
  }

  while (1) {
   if (a % b == 0) {
    if (b < 0){
     b = -b;
    }
    printf ("%lld\n", b);
    return 0;
   }
   else {
    c = a % b;
    a = b;
    b = c;
   }
  }
 return 0;
}
