double udaljenost(tocka_t *t) { return sqrt(pow(t->x, 2) + pow(t->y, 2)); }

tocka_t *pokNaNajblizuTocku(tocka_t *polje, int n) {
   tocka_t *najbliza = polje + n - 1;
   for (int i = n - 2; i >= 0; i--) {
      if (udaljenost(polje + i) < udaljenost(najbliza))
         najbliza = polje + i;
   }
   return najbliza;
}