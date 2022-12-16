#include <stdio.h>

int PovecajKonvertiraj(float *kune, int bonus_kune, float *postotak) {
   *postotak = 100. * bonus_kune / *kune;
   *kune = (*kune + (float)bonus_kune) / 7.5345;
   return *postotak >= 10. ? 1 : 0;
}