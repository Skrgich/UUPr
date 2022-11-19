#include <stdio.h>

int main() {

   char niz[20];
   int n, len = -1;
   printf("Upisite niz > ");
   fgets(niz, 20, stdin);
   printf("Upisite poziciju > ");
   scanf("%d", &n);
   n -= 1;
   while (niz[++len] != '\0' && niz[len] != '\n')
      ;
   niz[len] = '\0';
   if (n >= len)
      printf("Neispravna pozicija");
   else {
      printf("Rezultat: ");
      for (int i = 0; niz[i] != '\0'; i++) {
         if (i == n)
            continue;
         printf("%c", i < n                        ? niz[i]
                      : niz[i] > 47 && niz[i] < 58 ? 'X'
                      : niz[i] > 64 && niz[i] < 91 ? niz[i] + 32
                                                   : niz[i]);
      }
   }
   return 0;
}