#include <stdio.h>

int main() {
   int n, dj[] = {2, 3, 5, 7}, i, nije_dj = 0;
   printf("Unesite broj > ");
   scanf("%d", &n);
   if (n < 1)
      printf("Unesen je pogresan broj!");
   else {
      for (int i = 0; i < 4; i++) {
         if (n % dj[i] == 0)
            printf("Broj je djeljiv s brojem %d.\n", dj[i]);
         else
            nije_dj++;
      }
      if (nije_dj == 4)
         printf("Broj nije djeljiv s brojevima 2, 3, 5, 7.");
   }
   return 0;
}
