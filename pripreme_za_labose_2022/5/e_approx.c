#include <math.h>
#include <stdio.h>

double e_approx(int n) {
   double suma = 1, fact = 1;

   for (int i = 1; i <= n; i++) {
      fact *= i;
      suma += 1 / fact;
   }
   return suma;
}

int main() {

   int n;
   printf("Upisite broj n: ");
   scanf("%d", &n);
   double approx = e_approx(n);
   printf("Aproksimacija e: %.12lf", approx);
   printf("\nRazlika: %.12lf", approx - exp(1));

   return 0;
}
