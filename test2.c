//vypocet korenov kvadratickej rovnice, cez diskriminanta
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c, diskriminant, vysledok, vysledok2;
    printf("zadaj mi 3 cisla kvadratickej rovnice:\n");
    scanf("%d %d %d", &a, &b, &c );
    printf("(%d)*x+(%d)*y+(%d)*z=0\n", a, b, c);

    diskriminant = sqrt(b*b-4*a*c);
    printf("diskriminantom je %d\n", diskriminant);

    if (diskriminant == 0)
    {
        printf("rovnica ma prave 1 riesenie\n");
        vysledok = -b/ (a*2);
        printf("vysledok rovnice je %d\n", vysledok);
    } 
    else if(diskriminant >= 0)
    {
        printf("rovnica ma 2 riesenia\n");
        vysledok = (-b + diskriminant)/(a*2);
        vysledok2 = ( -b - diskriminant)/(a*2);
        printf("prve riesenie je %d a druhe je %d\n", vysledok, vysledok2);
    }
    else{
        printf("rovnica nema riesenie v R\n");
    }



    return 0;

}