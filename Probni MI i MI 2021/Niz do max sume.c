#include <stdio.h>

int pow3(n) {
   int rez = 1;
   while (n-- > 0)
      rez *= 3;
   return rez;
}

int izr_clan(int i, int prvi, int drugi) {
   if (i % 2 == 0) {
      return drugi << ((i - 1) / 2);
   } else {
      return prvi * pow3(i / 2);
   }
}

int main() {

   int prvi, drugi, maxsum, sum = 0;
   printf("Upisite tri prirodna broja > ");
   scanf("%d %d %d", &prvi, &drugi, &maxsum);

   int i = 2, tr = prvi, slj = drugi;
   sum = prvi;
   printf("Rezultat:");
   while (sum + slj < maxsum) {
      printf(" %d,", tr);
      sum += slj;
      tr = slj;
      slj = izr_clan(++i, prvi, drugi);
   }
   if (sum < maxsum) printf(" %d", tr);
   return 0;
}