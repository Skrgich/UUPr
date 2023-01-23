#include <stdio.h>
#include <math.h>
int main(void)
{
    int vel;
    double duz;
    
    scanf("%d", &vel);
    
    double mat[vel][2];
    double rez[vel];
    
    for (int i = 0; i < vel; i++)
    {
        scanf("%lf %lf", &mat[i][0], &mat[i][1]);
    }
    
    // ovdje ugraditi poziv funkcije
    
    for (int i = 0; i < vel; i++)
    {
        printf("%.5lf %.5lf %.5lf\n", rez[i], mat[i][0], mat[i][1]);
    }
    
    printf("%.5lf", duz);

    return 0;
}