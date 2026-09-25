//nacitanie cisel do pola a ich vypisanie v opacnom poradi
#include <stdio.h>
int main(void)
{
    int pocet_opakovani;
    printf("zadaj pocet prvkov v poli: ");
    scanf("%d", &pocet_opakovani);
    int pole[pocet_opakovani];
    int a = 0;
    for (int i =0; i < pocet_opakovani; i++)
    {
        printf("zadaj prvok pola: \n");
        scanf("%d", &pole[a]);
        a++;

    }
    printf("\n");
    
    for (int i = pocet_opakovani - 1; i >= 0; i--){
        printf("%d\n", pole[i]);
        
    }
    
    int max = pole[0], min = pole[0];
    for (int i =0 ; i < pocet_opakovani; i++ ){
        if (max < pole[i]){
            max = pole[i]; 
        }
        if (min >= pole[i]){
            min = pole[i];
        }
    }
    printf("maximum je %d\n", max);
    printf("minimum je %d\n", min);
    

    int medzihodnota;
    for (int i = 0; i < pocet_opakovani; i++ ){
        medzihodnota += pole[i];
    }
    float priemer = (float)medzihodnota/ pocet_opakovani;
    printf("priemer je %f\n", priemer);

    return 0;
}