#include <math.h>
#include <stdio.h>

struct Tocka {
   float x;
   float y;
   float r;
};

int main() {

   int n;
   float min_dist = 10e38;

   printf("Upisati n > ");
   scanf("%d", &n);
   
   struct Tocka tocke[n];
   for (int i = 0; i < n; i++) {
      
      printf("%3d. tocka > ", i + 1);
      scanf("%f %f", &tocke[i].x, &tocke[i].y);
      
      tocke[i].r = sqrt(pow(tocke[i].x, 2) + pow(tocke[i].y, 2));
      if (tocke[i].r < min_dist)
         min_dist = tocke[i].r;
   }

   printf("Najblize ishodistu su tocke:");
   for (int i = 0; i < n; i++) {
      if (tocke[i].r == min_dist) {
         printf("\n%6.2f %6.2f", tocke[i].x, tocke[i].y);
      }
   }

   return 0;
}











