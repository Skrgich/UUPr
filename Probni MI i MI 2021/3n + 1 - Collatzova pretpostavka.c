#include <stdio.h>

int main() {

   int n;
   printf("Unesite prirodni broj > ");
   scanf("%d", &n);

   printf("Rezultat:");
   while (1) {
      printf(" %d,", n);
      if (n == 1)
         break;
      n = n % 2 == 0 ? n / 2 : 3 * n + 1;

   }
   printf(" 4, 2, 1, 4, 2, 1");

   return 0;
}

