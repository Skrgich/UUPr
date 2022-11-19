#include <stdio.h>

int main() {

   int racuni[1001] = {0}, n;
   printf("Upisite broj uplata > ");
   scanf("%d", &n);
   printf("Upisujte uplate >\n");
   int racun, iznos, max_suma = -2147483647;
   for (int i = 0; i < n; i++) {
      scanf("%d %d", &racun, &iznos);
      racuni[racun - 100000] += iznos;
      if (racuni[racun - 100000] > max_suma)
         max_suma = racuni[racun - 100000];
   }
   printf("Najveca suma:%8d kn\n", max_suma);
   return 0;
}











