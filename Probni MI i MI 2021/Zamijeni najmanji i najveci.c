#include <stdio.h>

int main() {

   int n;
   do {
      printf("Unesite duljinu polja > ");
      scanf("%d", &n);
   } while (n < 5 || n > 10);

   int polje[n];
   scanf("%d", &polje[0]);
   
   int max = polje[0], min = polje[0], max_i = 0, min_i = 0;
   
   for (int i = 1; i < n; i++) {
      scanf("%d", &polje[i]);
      
      if (polje[i] > max) {
         max = polje[i];
         max_i = i;
      } else if (polje[i] < min) {
         min = polje[i];
         min_i = i;
      }
   }

   printf("Rezultat:");
   for (int i = 0; i < n; i++) {
      printf(" %d", i == max_i ? min : i == min_i ? max : polje[i]);
      
      if (i < n - 1)
         printf(",");
   }
   return 0;
}
