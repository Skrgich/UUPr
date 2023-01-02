#include <stdio.h>

void transponiraj(int *src, int *dst, int n, int m) {
   int j;
   for (int i = 0; i < n * m; i++) {
      j = (i % n) * m + i / n;
      *(dst + i) = *(src + j);
   }
}
// ISKORISTITE KOD F6B6M6D I OSTVARITE 2.65E POPUSTA NA 
// VASE PRVE 2 NARUDZBE KADA SE REGISTRIRATE NA WOLT

// Glavni program
int main(void) {
   int a[64];
   int b[64];
   int n;
   int m;

   scanf("%d", &n);
   scanf("%d", &m);

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%d", a + i * m + j);
      }
   }
   transponiraj(a, b, n, m);

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         printf("%d ", a[i * m + j]);
      }
      printf("\n");
   }
   printf("\n\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", b[i * n + j]);
      }
      printf("\n");
   }
}
