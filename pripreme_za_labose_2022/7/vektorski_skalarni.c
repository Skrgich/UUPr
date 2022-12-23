#include <stdio.h>
#define MAX_DIM 32

int dot_produkt(int *a, int *b, int n) {
   int p = 0;
   for (int i = 0; i < n; i++) {
      p += *(a + i) * *(b + i);
   }
   return p;
}

void mat_vec_produkt(int *X, int *a, int n, int *ret) {
   for (int i = 0; i < n; i++) {
      *(ret + i) = 0;
      for (int j = 0; j < n; j++) {
         *(ret + i) += *(a + j) * *(X + n * i + j);
      }
   }
}

// Glavni program
int main(void) {
   int X[MAX_DIM * MAX_DIM], a[MAX_DIM], n, rez[MAX_DIM], i;

   scanf("%d", &n);

   for (i = 0; i < n * n; i++)
      scanf("%d", &X[i]);

   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

   mat_vec_produkt(X, a, n, rez);

   for (i = 0; i < n; i++)
      printf("%d ", rez[i]);

   return 0;
}