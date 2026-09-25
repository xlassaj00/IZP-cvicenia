//vypocet zadaneho faktorialu
#include <stdio.h>
int main(void)
{
    int pocet_opakovani;
    int vypocet = 1;
    int cislo = 1;
    
    printf("zadaj aky faktorial: \n");
    scanf("%d", &pocet_opakovani);
    
    for (int i =0; i < pocet_opakovani; i++)
    {
        vypocet *= cislo++;
        printf("vysledok je %d\n", vypocet);
        
    }
    return 0;
}