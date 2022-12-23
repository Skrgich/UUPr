#include <stdio.h>

void obrni(char *src, char *dst) {
   int len = 0;
   while (*(src + len) != '\0')
      len++;
   *(dst + len) = '\0';
   for (int i = 0; i < len; i++) {
      *(dst + len - 1 - i) = *(src + i);
   }
}

// Glavni program
int main(void) {
   char src[32], dst[32];

   scanf("%s", src);

   obrni(src, dst);

   printf("%s", dst);

   return 0;
}