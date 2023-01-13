void generirajLozinku(unsigned int sjeme, const char *znakoviZaLozinku,
                      int duljLoz, char *lozinka) {
   srand(sjeme);
   int brojZnakova = strlen(znakoviZaLozinku);
   for (int i = 0; i < duljLoz; i++) {
      *(lozinka + i) = *(znakoviZaLozinku + rand() % brojZnakova);
   }
   *(lozinka + duljLoz) = '\0';
}
