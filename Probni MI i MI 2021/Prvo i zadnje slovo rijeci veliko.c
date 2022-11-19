#include <stdio.h>

int main() {

   char niz[11];
   printf("Unesite niz znakova > ");
   fgets(niz, 11, stdin);
   
   printf("Rezultat: ");
   for (int i = 0; niz[i] != '\0' && niz[i] != '\n' && i < 11; i++) {
      if (i == 0 || (i > 0 && niz[i - 1] == ' ') || (niz[i + 1] == ' ' || niz[i + 1] == '\n' || niz[i + 1] == '\0')) {
         printf("%c", niz[i] > 96 && niz[i] < 123 ? niz[i] - 32 : niz[i]);
      } else
         printf("%c", niz[i]);
   }
   return 0;
}
