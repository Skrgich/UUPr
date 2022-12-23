#include <math.h>
#include <stdio.h>

float get_avg(float *a, int n) {
   float sum = 0;
   for (int i = 0; i < n; i++)
      sum += *(a + i);
   return sum / n;
}

void stddev(float *a, int n, float *std) {
   float sum = 0;
   for (int i = 0; i < n; i++) {
      sum += pow(*(a + i) - get_avg(a, n), 2);
   }
   *std = sqrt(sum / n);
}

int IndexOfMaxdev(float *a, int n, int m) {
   float max_dev, std_dev;
   int max_ind;
   for (int i = 0; i < n; i++) {
      stddev(&a[i], m, &std_dev);
      if (i == 0 || std_dev > max_dev) {
         max_dev = std_dev;
         max_ind = i;
      }
   }
   return max_ind;
}

// Glavni program
int main(void) {
   float M[64];
   int m;
   int n;
   int index;
   scanf("%d", &n);
   scanf("%d", &m);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%f", M + i * m + j);
      }
   }
   index = IndexOfMaxdev(M, n, m);
   printf("%d", index);
}