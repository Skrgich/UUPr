#include <stdio.h>

int main() {
   int m, n;
   printf("Unesi dimenzije:");
   scanf("%d %d", &m, &n);
   if (m != n) {
      printf("\nDimenzije ne odgovaraju kvadratnoj matrici!");
   } else {
      int polje[n][n];
      printf("\nUnesi clanove polja:");
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            scanf("%d", &polje[i][j]);
         }
      }

      printf("\nOdabrana je matrica:\n");
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            printf(" %d", polje[i][j]);
         }
         printf("\n");
      }

      int razlika_zbrojeva = 0;
      for (int i = 0; i < n; i++) {
         razlika_zbrojeva += polje[i][i] * polje[i][i];
         razlika_zbrojeva -= polje[i][n - i - 1] * polje[i][n - i - 1];
      }

      printf("Razlika zbrojeva je %d.", razlika_zbrojeva);
   }
   return 0;
}












