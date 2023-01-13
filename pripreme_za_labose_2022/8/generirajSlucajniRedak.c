void generirajSlucajniRedak(int n, int *mat){
   int r = rand() % n;
   for (int i = 0; i < n; i++){
      *(mat + r * n + i) = rand() % 7 + 2;
   }
}