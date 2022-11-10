#include <stdio.h>

int main() {

   int n;
   printf("Upisite broj redaka/stupaca matrice > ");
   scanf("%d", &n);

   int polje[n][n];
   printf("Upisite %dx%d clanova > ", n, n);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }

   int r, c, suma = 0;
   printf("\nUpisite redni broj retka > ");
   scanf("%d", &r);
   printf("Upisite redni broj stupca > ");
   scanf("%d", &c);

   for (int i = 0; i < n; i++) {
      suma += polje[r][i];
      suma += polje[i][c];
   }
   suma -= polje[r][c];

   printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d.", r, c,
          suma);

   return 0;
}
