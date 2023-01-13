struct dionica_s{
   char oznaka[MAX_OZNAKA];
   float cijena;
   char naziv[MAX_NAZIV];
};

struct portfelj_s{
   char oznaka[MAX_OZNAKA];
   int kolicina;
};

int vrijednost(struct dionica_s *dionice, int broj_dionica, char * naziv){
   for (int i = 0; i < broj_dionica; i++){
      if (strcmp(naziv, (dionice + i)->oznaka) == 0) return (dionice + i)->cijena;
   }
   return 0;
}

float IzracunajVrijednostPortfelja(
   struct dionica_s *dionice, 
   int broj_dionica, 
   struct portfelj_s *moj_portfelj, 
   int broj_dionica_u_mom_portfelju){

      float s = 0.;
      for (int i = 0; i < broj_dionica_u_mom_portfelju; i++){
         s += (moj_portfelj + i)->kolicina * vrijednost(dionice, broj_dionica, (moj_portfelj + i)->oznaka);
      }
   return s;
}












