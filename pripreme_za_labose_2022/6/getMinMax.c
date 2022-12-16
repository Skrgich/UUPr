

void getMinMax(int *polje, int len, int *min, int *max) {
   *min = *max = *polje;
   for (int i = 1; i < len; i++) {
      if (*(polje + i) < *min)
         *min = *(polje + i);
      if (*(polje + i) > *max)
         *max = *(polje + i);
   }
}
