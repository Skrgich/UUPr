int main(void) {
    int len;
    scanf ("%d", &len);
    unsigned char polje[len];
    for (int i = 0; i < len; i++) {
        polje[i] = i + 1;
    }    
    // ovdje ugraditi poziv funkcije
    for (int i = 0; i < len/2 + (len%2); i++) {
        printf("%u ", polje[i]);
    }
    return 0;
} 