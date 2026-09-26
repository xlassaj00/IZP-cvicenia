//vypocet priemernej spotreby paliva na 100 km
#include <stdio.h>
int main()
{
    float pociatocna_nadrz, konecna_nadrz, pociatocny_tachometer, koncovy_tachometer;
    printf("zadajte pociatocny stav nadrze a pociatocny stav tachometra: \n");
    scanf("%f %f", &pociatocna_nadrz, &pociatocny_tachometer);
    printf("zadajte konecny stav nadrze a konecny stav tachometra: \n");
    scanf("%f %f", &konecna_nadrz, &koncovy_tachometer);

    float rozdiel_nadrz, rozdiel_tachometer;
    rozdiel_nadrz = pociatocna_nadrz - konecna_nadrz;
    rozdiel_tachometer = koncovy_tachometer - pociatocny_tachometer;

    float vysledok;
    vysledok = (rozdiel_nadrz/rozdiel_tachometer)*100;
    printf("Spotreba na 100km je %f.\n", vysledok);
    return 0;
}