#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   int n;
   printf("Unesite broj > ");
   scanf("%d", &n);
   if (n % 2 == 0)
      printf("Neispravan unos!");
   else {
      for (int i = 0; i < n; i++) {
         printf("\n");
         for (int j = 0; j < abs(n / 2 - i); j++)
            printf(" ");
         for (int j = 0; j < n - 2 * abs(n / 2 - i); j++)
            printf("*");
      }
   }
   return 0;
}

