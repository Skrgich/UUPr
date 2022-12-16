

void BrojSlovaZnamenaka(char niz[], int *brojSlova, int *brojZnamenaka) {
   char *p = niz;
   while (*p != '\0' && *p != '\n') {
      if ((*p > 64 && *p < 91) || (*p > 96 && *p < 123))
         (*brojSlova)++;
      else if ((*p > 47 && *p < 58))
         (*brojZnamenaka)++;
      p++;
   }
}
