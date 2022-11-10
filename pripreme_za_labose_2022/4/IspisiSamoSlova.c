#include <stdbool.h>
#include <stdio.h>

int main() {

   char niz[150];
   printf("Upisite znakovni niz > ");
   fgets(niz, 150, stdin);

   int i = 0;
   bool bilo_znakova = false;
   printf("Izlazni znakovni niz je : ");
   while (niz[i] != '\0') {
      if ((niz[i] > 64 && niz[i] < 91) || (niz[i] > 96 && niz[i] < 123)) {
         printf("%c", niz[i]);
         bilo_znakova = true;
      }
      i++;
   }
   if (!bilo_znakova) {
      printf("prazan string");
   }

   return 0;
}