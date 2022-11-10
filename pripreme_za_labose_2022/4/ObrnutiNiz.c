#include <stdio.h>

int main() {

   char niz[200];
   printf("Upisite znakovni niz > ");
   fgets(niz, 200, stdin);

   int len = 0;
   while (niz[len] != '\0' && niz[len] != '\n') {
      len++;
   }

   printf("Obrnuti niz: ");
   for (int i = len - 1; i >= 0; i--) {
      printf("%c", niz[i] > 96 && niz[i] < 123 ? niz[i] - 32 : niz[i]);
   }

   return 0;
}