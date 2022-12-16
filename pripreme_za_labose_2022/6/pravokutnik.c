#include <stdio.h>
#include <stdlib.h>

int ProvjeriPravokutnik(int x1, int y1, int x2, int y2) {
   return (x1 == x2 || y1 == y2) ? 0 : 1;
}

int IzracunajDuljinuStranice(int a1, int a2) { return abs(a1 - a2); }

int IzracunajOpseg(int a, int b) { return 2 * (a + b); }

int IzracunajPovrsinu(int a, int b) { return a * b; }

void IzracunaOpsegPovrsinu(int *opseg, int *povrsina) {

   *opseg = *povrsina = -1;

   int x1, y1, x2, y2;

   printf("Unesite koordinate za tocku 1 > ");
   scanf("%d %d", &x1, &y1);
   printf("Unesite koordinate za tocku 2 > ");
   scanf("%d %d", &x2, &y2);

   if (ProvjeriPravokutnik(x1, y1, x2, y2) == 1) {
      int a = IzracunajDuljinuStranice(x1, x2);
      int b = IzracunajDuljinuStranice(y1, y2);
      *opseg = IzracunajOpseg(a, b);
      *povrsina = IzracunajPovrsinu(a, b);
   }
}