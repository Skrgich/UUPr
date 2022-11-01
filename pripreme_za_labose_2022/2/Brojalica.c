#include <stdio.h>

int main() {
   int n;
   printf("Unesite broj rijeci brojalice > ");
   scanf("%d", &n);
   if (n < 1)
      printf("KRIVI UNOS");
   else {
      for (int i = 0; i < n; i++) {
         if (i % 3 > 0)
            printf("p");
         printf("ec");
         if (i % 3 < 2)
            printf("i");
         printf(" ");
      }
   }
   return 0;
}
