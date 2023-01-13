
void increaseLowest(char *fileName, int percentage) {
   FILE *f = fopen(fileName, "r+b");
   struct record temp;
   int min_pok = 0, pok = 0, min_placa = 0;
   while (fread(&temp, sizeof(temp), 1, f) == 1) {
      if (pok == 0 || temp.salary < min_placa) {
         min_placa = temp.salary;
         min_pok = pok;
      }
      pok++;
   }
   fseek(f, min_pok * sizeof(temp), SEEK_SET);
   fread(&temp, sizeof(temp), 1, f);
   temp.salary *= (1 + percentage / 100.);
   fseek(f, min_pok * sizeof(temp), SEEK_SET);
   fwrite(&temp, sizeof(temp), 1, f);
   fclose(f);
}
