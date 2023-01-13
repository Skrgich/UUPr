
struct listic{
   long serijski_broj;
   int odigrana_kombinacija[6];
};

int svih6(struct listic *l, int *k){
   for (int i = 0; i < 6; i++){
      if (*(k + i) != l->odigrana_kombinacija[i]) return 0;
   }
   return 1;
}

void ObradaIgre (struct listic *svi_listici, int N, int *izvuceni_brojevi){
   dobitni.serijski_broj = -1;
   for (int i = 0; i < N; i++){
      if (svih6(svi_listici + i, izvuceni_brojevi)) dobitni = *(svi_listici + i);
   }

}