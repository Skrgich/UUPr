#include <stdio.h>

int main(){
   int n;
   printf("Upisite iznos u kn > ");
   scanf("%d",  &n);
   printf("Kovanice:\n");
   if (n / 5 > 0) printf("%d x 5 kn\n",  n / 5);
   if ((n % 5) / 2 > 0) printf("%d x 2 kn\n",  (n % 5) / 2);
   if ((n % 5) % 2 > 0) printf("1 x 1 kn");
   return 0;
}


