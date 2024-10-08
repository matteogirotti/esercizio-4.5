#include <stdio.h>

int main(void) {
    int i;
    int nprodotti;
    float totale=0;
    float prezzo;
    printf("inserire il numero dei prodotti: ");
    scanf("%d", &nprodotti);
    for(i=1; i<nprodotti; i++) {
        printf("inserire il prezzo del prodotto numero %d:",i);
        scanf("%f",&prezzo);
        totale+=prezzo;
    }
    printf("%f\n",totale);
    return 0;
}
