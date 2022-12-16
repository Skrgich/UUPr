#include <math.h>

void sumaPotencija(int a, int b, int c, int n, int * rez1, int *rez2){
   *rez1 = pow(a, n) + pow(b, n) + pow(c, n);
   *rez2 = pow(a + b + c, n);

}