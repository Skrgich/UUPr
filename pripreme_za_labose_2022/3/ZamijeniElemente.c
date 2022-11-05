#include <stdio.h>

int main() {
   int n;
   printf("Unesite duljinu polja: ");
   scanf("%d", &n);

   int polje[n];
   printf("Unesite elemente polja: ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   int zbroj_vecih_indexa = polje[n - 1];
   for (int i = n - 2; i >= 0; i--) {
      polje[i] += zbroj_vecih_indexa;
      zbroj_vecih_indexa = polje[i];
   }

   printf("\nIzracunato polje:");
   for (int i = 0; i < n; i++) {
      printf(" %d", polje[i]);
   }

   return 0;
}












