#include <stdio.h>

int djelitelj(int a, int b) {
   int i;
   for (i = a > b ? b : a; i > 0; i--) {
      if (a % i == 0 && b % i == 0)
         break;
   }
   return i;
}

void reduciraj(int a, int b) {
   int dj = djelitelj(a, b);
   if (dj == b)
      printf("Reduciran: %d", a / dj);
   else
      printf("Reduciran: %d/%d", a / dj, b / dj);
}

int main() {

   printf("Upisite brojnik i nazivnik: ");
   int a, b;
   scanf("%d %d", &a, &b);
   printf("Razlomak: %d/%d\n", a, b);
   reduciraj(a, b);

   return 0;
}
