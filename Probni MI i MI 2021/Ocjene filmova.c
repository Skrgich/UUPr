#include <stdio.h>

int main() {

   int m, n, suma, max_ocj, max_ind;
   printf("Upisite dimenzije dvodimenzijskog polja > ");
   scanf("%d %d", &m, &n);
   
   int polje[m][n];
   float prosjek[m];
   for (int i = 0; i < m; i++) {
      printf("Upisite ocjene %d. gledatelja > ", i);
      
      suma = 0;
      max_ocj = 0;
      max_ind = -1;
      
      for (int j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
         suma += polje[i][j];
         
         if (polje[i][j] > max_ocj) {
            max_ocj = polje[i][j];
            max_ind = j;
         }
      }
      
      polje[i][0] = max_ind;
      prosjek[i] = 1. * suma / n;
   }
   
   for (int i = 0; i < m; i++) {
      printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna "
             "ocjena kojom je ocijenio filmove iznosi %.1f\n",
             i, polje[i][0], prosjek[i]);
   }
   return 0;
}
