#include <stdio.h>
#include <stdlib.h>

int main(){
   int n,  a;
   printf("Unesite cetveroznamenkasti broj > ");
   scanf("%d",  &n);
   a = abs(n % 10 + n / 100 % 10 - n / 1000 - n / 10 % 10);
   if (a == 0) printf("Provjera je uspjesna!");
   else printf("Apsolutna razlika suma je %d",  a);
   return 0;
}


