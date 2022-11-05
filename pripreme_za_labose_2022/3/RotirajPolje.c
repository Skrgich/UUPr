#include <stdio.h>

int main() {
   int n, temp;
   printf("Unesite dimenzije polja: ");
   scanf("%d", &n);
   int polje[n][n];
   printf("Unesite elemente polja:\n");
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }

   for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n; j++) {
         temp = polje[i][j];
         polje[i][j] = polje[n - i - 1][j];
         polje[n - i - 1][j] = temp;
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
         temp = polje[i][j];
         polje[i][j] = polje[j][i];
         polje[j][i] = temp;
      }
   }

   printf("Izracunato polje:\n");
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}
