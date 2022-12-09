#include <math.h>
#include <stdio.h>

float medijan(float a, float b, float c) {
   return (a > b && a < c) || (a < b && a > c)   ? a
          : (b < a && b > c) || (b > a && b < c) ? b
                                                 : c;
}

int main() {

   float a, b, c;
   printf("Upisite tri realna broja > ");
   scanf("%f %f %f", &a, &b, &c);
   printf(
       "\nApsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f",
       fabs(medijan(a, b, c) - ((a + b + c) / 3)));

   return 0;
}
