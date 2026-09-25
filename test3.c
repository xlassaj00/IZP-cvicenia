//priestupny nepriestupny rok
#include <stdio.h>
int main(void)
{
    int rok;
    printf("zadaj rok: \n");
    scanf("%d", &rok);
    
    if ((rok%4 == 0 && rok%100 != 0) || (rok%100 == 0 && rok%400 == 0))
    {
        printf("rok je priestupny\n");
    }
    /*else if (rok%100 == 0 && rok%400 == 0)
    {
        printf("rok je priestupny\n");
    }*/
    else{
        printf("rok nie je priestupny\n");
    }

    return 0;
}