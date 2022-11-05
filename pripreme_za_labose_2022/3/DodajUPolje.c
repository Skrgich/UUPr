#include <stdio.h>

int main() {
   int n;
   printf("Unesite broj clanova polja: ");
   scanf("%d", &n);

   int polje[n];
   printf("\nUnesite clanove polja (%d):", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   int vrijednost, ind;
   printf("\nUnesite vrijednost novog clana te indeks:");
   scanf("%d %d", &vrijednost, &ind);

   printf("\n\nPocetno polje\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", polje[i]);
   }

   for (int i = n - 1; i > ind; i--) {
      polje[i] = polje[i - 1];
   }
   polje[ind] = vrijednost;

   printf("\nNovodobiveno polje\n");
   for (int i = 0; i < n; i++) {
      printf("%d ", polje[i]);
   }

   return 0;
}












