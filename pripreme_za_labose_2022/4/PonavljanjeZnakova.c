#include <stdio.h>

int main() {

   char niz[100];
   printf("Unesite niz > ");
   fgets(niz, 100, stdin);

   int ponavljanja[95] = {0};
   int i = 0;
   while (niz[i] != '\0') {
      ponavljanja[niz[i] - 32]++;
      i++;
   }

   int max = ponavljanja[0];
   int max_ind[95] = {0};
   int max_br = 1;
   for (int i = 1; i < 95; i++) {
      if (ponavljanja[i] > max) {
         max = ponavljanja[i];
         max_br = 1;
         max_ind[0] = i;
      } else if (ponavljanja[i] == max) {
         max_br++;
         max_ind[max_br - 1] = i;
      }
   }

   if (max_br > 1) {
      printf("Znakovi ");
      for (int i = 0; i < max_br; i++) {
         printf("\"%c\"", max_ind[i] + 32);
         if (i != max_br - 1)
            printf(", ");
      }
      printf(" se ponavljaju %d puta.", max);
   } else {
      printf("Znak \"%c\" se ponavlja %d puta.", max_ind[0] + 32, max);
   }

   return 0;
}