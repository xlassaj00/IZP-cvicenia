//zobrazenie casu z hodin a minut v sekundach
#include <stdio.h>
int main()
{
    int hodiny, minuty, sekundy, hodiny_v_sekundach, minuty_v_sekundach;


    printf("zadajte cas v hodinach a minutach oddelene:\n");
    scanf("%d %d", &hodiny, &minuty);


    hodiny_v_sekundach = hodiny*360;
    minuty_v_sekundach = minuty*60;
    sekundy = hodiny_v_sekundach + minuty_v_sekundach;


    printf("%d h je %d sekund, %d min je %d sekund a celkovo je to %d sekund\n", hodiny, hodiny_v_sekundach, minuty, minuty_v_sekundach, sekundy);
    


    return 0;
}