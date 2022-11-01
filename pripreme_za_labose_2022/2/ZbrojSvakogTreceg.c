#include <stdio.h>

int main() {
   int a, b, s = 0;
   printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
   scanf("%d %d", &a, &b);
   if (a >= b)
      printf("Prvi broj mora biti manji od drugog broja.");
   else if (a > 1000 || a < 1 || b < 1)
      printf("Brojevi moraju biti u intervalu [1, 1000].");
   else {
      for (int i = a + 2; i <= b; i += 3)
         s += i;
      printf("Zbroj svakog treceg broja iznosi: %d", s);
   }
   return 0;
}













