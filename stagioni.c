// Si scriva un programma in linguaggio C che permetta di stabilire la stagione
// corrispondente al mese inserito come intero dall'utente. 
// Qualora il mese sia Marzo, Giugno, Settembre e Dicembre 
// (tutti mesi a cavallo di due stagioni) si richieda all'utente di specificare 
// anche il giorno. Se il giorno e' compreso tra 1 e 20 si considera
// la stagione precedente altrimenti quella successiva.

#include <stdio.h>

int main (void){
    int mese;
    int giorno;
        printf("Inserisci il numero del mese");
        scanf("%d", &mese);

    switch (mese) {
        case 1:
        printf("Sei in inverno");
        break; 

        case 2: 
        printf("Sei in inverno");
        break;

        case 3: 
        printf("Inserisci giorno");
        scanf("%d", &giorno);
        if (giorno > 20 && giorno < 31)
        printf("Sei in primavera");
        else if (giorno > 0 && giorno < 20)
        printf("Sei in inverno");
        else 
        printf("errore");
        break;

        case 4: // risparmio di codice possibile se danno lo stesso risultato
        case 5:
        printf("Sei in primavera");
        break;

        case 6: 
        printf("Inserisci giorno");
        scanf("%d", &giorno);
        if (giorno > 20 && giorno < 30)
            printf("Sei in estate");
        else if (giorno > 0 && giorno < 20)
            printf("Sei in primavera");
        else 
            printf("errore");
        break;

        case 7:
        case 8:
        printf("Sei in estate");
        break;

        case 9: 
        printf("Inserisci giorno");
        scanf("%d", &giorno);
        if (giorno > 20 && giorno < 30)
            printf("Sei in autunno");
        else if (giorno > 0 && giorno < 20) 
            printf("Sei in estate");
        else 
            printf("errore");
        break;

        case 10:
        case 11:
        printf("Sei in autunno");
        break;

        case 12:
        printf("Inserisci giorno");
        scanf("%d", &giorno);
        if (giorno > 20 && giorno < 30)
            printf("Sei in inverno");
        else if (giorno > 0 && giorno < 20) 
            printf("Sei in autunno");
        else 
        printf("errore");
        break;

        default:
        printf("Il tuo numero non è valido");
        break;
    }
    return 0;
}


