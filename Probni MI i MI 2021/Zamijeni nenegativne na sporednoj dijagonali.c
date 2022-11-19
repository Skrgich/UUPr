#include <stdio.h>

int main() {

   int n;
   do{
      printf("Upisite n > ");
      scanf("%d", &n);
   }while (n < 1);

   int polje[n][n];
   
   printf("Rezultat:");
   for (int i = 0; i < n; i++){
      
      printf("\n");
      for (int j = 0; j < n; j++){
         scanf("%d", &polje[i][j]);
         
         polje[i][j] = i + j + 1 != n ? polje[i][j] : i % 2 == 0 ? 0 : 1;
         
         printf("%3d", polje[i][j]);
      }
   }
   return 0;
}
