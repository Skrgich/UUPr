#include <stdio.h>

int main() {

   char niz[51];
   printf("Niz > ");
   fgets(niz, 51, stdin);
   int rpoc;
   int maxpoc;
   int max_r = 0;
   int i = 0;
   int br = 0;
   while (niz[i] != '\n') {
      rpoc = i;
      while (niz[i] != '.' && niz[i] != ' ')
         i++;
      br++;
      if (i - rpoc > max_r) {
         max_r = i - rpoc;
         maxpoc = rpoc;
      }
      i++;
   }
   printf("Broj rijeci: %d\n", br);
   printf("Najdulja rijec: ");
   for (int i = maxpoc; i < maxpoc + max_r; i++)
      printf("%c", niz[i]);

   return 0;
}