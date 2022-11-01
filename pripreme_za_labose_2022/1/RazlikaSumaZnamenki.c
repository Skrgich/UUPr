#include <stdio.h>

int main() {
   int n,  s = 0;
   printf("Upisite troznamenkasti prirodni broj > ");
   scanf("%d",  &n);
   while (n > 0) {
      s += (n % 2 == 0 ? 1 : -1) * (n % 10);
      n /= 10;
   }
   printf("Rezultat: %d",  s);
   return 0;
}
