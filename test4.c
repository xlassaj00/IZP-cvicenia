//funkcia getchar(), ktora zisti ciselnu hodnotu znaku podla ASCII
#include <stdio.h>
int main(void)
{
    char znak;
    printf("zadaj 1 znak: \n");
    znak = getchar();
    printf("zadal si: %d\n", znak);
    
    return 0;
}