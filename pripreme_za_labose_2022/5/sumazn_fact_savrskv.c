#include <math.h>
#include <stdio.h>

int savrsen_kvadrat(int n) { return pow(sqrt(n), 2) == n ? 1 : 0; }

int factorial(int n) {
   if (n == 1)
      return 1;
   return n * factorial(n - 1);
}

int zbroj_znamenaka(int n) {
   int zbroj = 0;
   while (n > 0) {
      zbroj += n % 10;
      n /= 10;
   }
   return zbroj;
}

int main() {

   int n;
   printf("Upisite prirodni broj > ");
   scanf("%d", &n);
   if (savrsen_kvadrat(zbroj_znamenaka(factorial(n))) == 1) {
      printf("\nSuma znamenaka od %d! je savrsen kvadrat.", n);
   } else {
      printf("\nSuma znamenaka od %d! nije savrsen kvadrat.", n);
   }

   return 0;
}











