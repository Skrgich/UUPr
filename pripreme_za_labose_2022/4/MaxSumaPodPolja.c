#include <stdio.h>

int main() {

   int n;
   printf("Upisite velicinu polja m > ");
   scanf("%d", &n);
   int polje[n];
   printf("Upisite %d clanova polja m > ", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   int max_global = 0;
   int l_global = 0, r_global = 0;
   int max_i = polje[0];
   int l = 0;

   for (int i = 1; i < n; i++) {
      if (max_i > 0) {
         max_i += polje[i];
      } else {
         max_i = polje[i];
         l = i;
      }
      if (max_i > max_global) {
         max_global = max_i;
         l_global = l;
         r_global = i + 1;
      }
   }

   printf("Pronadjeno pod-polje:");
   for (int i = l_global; i < r_global; i++) {
      printf(" %d", polje[i]);
   }
   printf("\nNajveca suma kontinuiranog pod-polja je: %d", max_global);

   return 0;
}
