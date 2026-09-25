//rozlisovanie sudych a lichych cisel s opakovanim
#include <stdio.h>
int main(void)
{
    
    int cislo;
    int pocet_opakovani;

    printf("zadaj kolko cisel chces checknut ci su sude alebo liche:\n");
    scanf("%d", &pocet_opakovani);

    for (int i=0; i<pocet_opakovani; i++)
    {
        
        printf("zadaj cislo: \n");
        scanf("%d", &cislo);
        if (cislo%2 == 0)
        {
            printf("cislo je sude\n");
        }
        else
        {
            printf("cislo je liche\n");
        }
    }
    return 0;
}