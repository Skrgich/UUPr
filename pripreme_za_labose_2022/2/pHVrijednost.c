#include <stdio.h>

int main() {
   int n;
   printf("Unesite pH vrijednost otopine > ");
   scanf("%d", &n);
   if (n < 0 || n > 14)
      printf("KRIVI UNOS");
   else {
      if (n == 7)
         printf("Otopina je neutralna.");
      else if (n < 7) {
         printf("Otopina je kisela.");
      } else {
         printf("Otopina je luznata.");
      }
   }
   return 0;
}













