#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
   float a, b;
   char o[11];
   printf("unesite prvi argument > ");
   scanf("%f", &a);
   printf("unesite operand > ");
   scanf("%s", o);
   printf("unesite drugi argument > ");
   scanf("%f", &b);
   
   if (strcmp(o, "plus") == 0)
      printf("%.2f + %.2f = %.2f", a, b, a + b);
   else if (strcmp(o, "minus") == 0)
      printf("%.2f - %.2f = %.2f", a, b, a - b);
   else if (strcmp(o, "puta") == 0)
      printf("%.2f * %.2f = %.2f", a, b, a * b);
   else if (strcmp(o, "podijeljeno") == 0)
      printf("%.2f / %.2f = %.2f", a, b, a / b);
   else if (strcmp(o, "potencija") == 0)
      printf("%.2f ^ %.2f = %.2f", a, b, pow(a, b));
   else
      printf("POGRESKA! operator nije podrzan (jos)");
   
   return 0;
}













