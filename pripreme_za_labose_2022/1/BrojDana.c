#include <stdio.h>

int main(){
   int n;
   printf("Unesite broj dana > ");
   scanf("%d",  &n);
   printf("Unos odgovara razdoblju od %d godina %d tjedana i %d dana",  n / 365,  (n % 365) / 7,  (n % 365) % 7);
   return 0;
}


