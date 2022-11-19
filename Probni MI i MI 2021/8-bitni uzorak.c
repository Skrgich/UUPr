#include <stdio.h>

int main() {

   unsigned int br, uzorak;

   printf("Unesite 32-bitni broj > ");
   scanf("%u", &br);
   printf("Unesite 8-bitni uzorak > ");
   scanf("%u", &uzorak);

   int pon = 0;
   for (int i = 0; i < 25; i++) {
      pon += (((br >> i) & 0xFF) == uzorak);
   }
   printf("Rezultat: %d", pon);

   return 0;
}