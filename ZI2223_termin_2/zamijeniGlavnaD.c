#include <stdio.h>
int main(void) {
   int n;
   scanf("%d", &n);
   float array[n][n];
   int i, j;
   for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j)
         scanf("%f", &array[i][j]);

   float rez = /* ovdje ugraditi poziv funkcije */ ;
   
   for (i = 0; i < n; ++i) {
      for (j = 0; j < n; ++j) {
         printf("%7.2f", array[i][j]);
      }
      printf("\n");
   }
   printf("Suma na sporednoj: %7.2f", rez);
   
   return 0;
}