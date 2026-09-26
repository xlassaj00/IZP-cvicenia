#include <stdio.h>
int main(){
    int hodiny, minuty, sekundy, ostatok;

    printf("zadajte cas v sekundach:\n");
    scanf("%d", &sekundy);
    hodiny = sekundy/360;
    minuty = (sekundy%360)/60;
    ostatok = (sekundy%360)%60;
    printf("%d sekund je %d hodin a %d minut\n", sekundy, hodiny, minuty);
    printf("ostatok sekund je %d sekund", ostatok);

    return 0;
}