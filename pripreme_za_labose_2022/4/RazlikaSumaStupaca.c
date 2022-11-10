#include <stdio.h>

int main() {

   int n;
   printf("Unesite n > ");
   scanf("%d", &n);
   int polje[n];
   int temp;
   for (int i = 0; i < n; i++) {
      polje[i] = 0;
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &temp);
         polje[j] += temp;
      }
   }

   printf("Rezultat >");
   for (int i = 0; i < n - 1; i++) {
      printf(" %d", polje[i] - polje[i + 1]);
   }
   printf(" %d", polje[n - 1] - polje[0]);

   return 0;
}