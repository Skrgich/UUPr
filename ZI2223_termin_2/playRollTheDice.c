#include <stdio.h>
#include <stdlib.h>

int playRollTheDice(int noOfDiceSides, int diceStartNumber, int noOfRolls);

int main(void){
    int seed, noOfDiceSides, diceStartNumber, noOfRolls;
    printf("Upisi redom: sjeme, broj stranica na kockici, pocetni broj na kockici i broj bacanja > ");
    scanf("%d %d %d %d", &seed, &noOfDiceSides, &diceStartNumber, &noOfRolls);

    srand(seed);
    printf("Pobjednik je: %d ",  /* ovdje ugraditi poziv funkcije */);
    
    return 0;
}