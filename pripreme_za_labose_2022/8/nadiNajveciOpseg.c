struct pravokutnik{
   int x1, y1, x2, y2;
};

int opseg(struct pravokutnik p){
   return 2 * ((p.x1 > p.x2 ? p.x1 - p.x2 : p.x2 - p.x1) + (p.y1 > p.y2 ? p.y1 - p.y2 : p.y2 - p.y1));
}

void nadiNajveciOpseg(int n, struct pravokutnik* pravokutnici){
   rjesenje = *pravokutnici;
   for (int i = 1; i < n; i++){
      if (opseg(*(pravokutnici + i)) > opseg(rjesenje)){
         rjesenje = *(pravokutnici + i);
      }
   }
}