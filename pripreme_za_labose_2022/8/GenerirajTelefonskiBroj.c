void GenerirajTelefonskiBroj(char * broj){
   while (*broj != '\0' && *broj != '\n'){
      if (*broj == 'x'){
         *broj = (rand() % 10) + 48;
      }
      else{
         *broj = 45;
      }
      broj++;
   }
}