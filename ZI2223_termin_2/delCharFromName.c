#include <stdio.h>
// definicija funkcije delCharFromName
int main(void) {
    char name[128+1];
    char c;
    printf("Unesite niz > ");
    fgets(name, 128, stdin);
    printf("Unesite znak > ");
    scanf("%c", &c);
    // ovdje ugraditi poziv funkcije
    printf("%s", name);
    return 0;
}