#include<stdio.h>

struct data {
    unsigned int zi, luna, an;
};
//structurile declara-le in partea de sus, altfel va fi mai aiurea..
struct angajat {
    char nume[30];
    data start, end;
};

void citire(data &d) {

    printf("   Ziua este:");
    scanf("%d", &d.zi);

    //se pot introduce si valori negative.. :P
    // si am folosit while, ca sa il oblig sa introduca o valoare corecta

    while (d.zi > 30 || d.zi < 0) {
        printf("Ati introdus ziua incorect.\n");
        printf("Introduceti o alta valoare:  ");
        scanf("%d", &d.zi);
    }



    printf("   Luna este:");
    scanf("%d", &d.luna);
    while (d.luna > 12 || d.luna < 0) {
        printf("Ati introdus luna incorect\n");
        printf("Introduceti o alta valoare:  ");
        scanf("%d", &d.luna);
    }


    printf("   Anul este:");
    scanf("%d", &d.an);



}

// te rog sa pui ; dupa instructiuni

void afisare(data &d) {
    //swich este incorect, switch e corect
    switch (d.luna) {
        case 1:
            printf("%d.Ianuarie.%d", d.zi, d.an);
            break;
        case 2:
            printf("%d.Februarie.%d", d.zi, d.an);
            break;
        case 3:
            printf("%d.martie.%d", d.zi, d.an);
            break;

        case 4:
            printf("%d.mai.%d", d.zi, d.an);
            break;
        case 5:
            printf("%d.Iunie.%d", d.zi, d.an);
            break;
        case 6:
            printf("%d.Iulie.%d", d.zi, d.an);
            break;
        case 7:
            printf("%d.August.%d", d.zi, d.an);
            break;
        case 8:
            printf("%d.Septembrie.%d", d.zi, d.an);
            break;
        case 9:
            printf("%d.Octobrie.%d", d.zi, d.an);
            break;
        case 10:
            printf("%d.Noiembrie.%d", d.zi, d.an);
            break;
        case 11:
            printf("%d.Decembrie.%d", d.zi, d.an);
            break;
        default:
            printf("Luna este incorecta..");
            break;
    }
}
/*
 * Ai grija cum pui acoladele..
 * cand deschizi o acolada o si inchizi, ca sa sti exact de unde pana unde e o functie..
 * daca pui acolade gresit, compilatorul nu o sa iti gaseasca acea functie in alta parte..
 *
 */

    // NU E OK SA INTROCI VOID DACA AI RETURN..
    // void comapar(data &d1, data &d2) - ce era inainte..

    int compar(data &d1, data &d2) {

        if (d1.an < d2.an)
            return -1;
        else if (d1.an > d2.an)
            return 1;

        // conditia asta e inutila, intotdeauna va fi adevarata
        // pt ca daca nu ar fi adevarata ar da return instructiunile de mai sus..
        // dar mna, programul functioneaza corect si cu ele
        if (d1.an == d2.an) {
            if (d1.luna < d2.luna)
                return -1;
            else if (d1.luna > d2.luna)
                return 1;
            else if (d1.zi < d2.zi)
                return -1;
            else if (d1.zi > d2.zi)
                return 1;

            // astea le-am mutat mai jos..
            //    else
            //       return 0;
        }
        //compilatorul mi-a spus ca trebuie sa dau return, asa ca am scris aici ceva, desi teoretic nu va ajunge aici niciodata
        return 0;
    }


    void citire_a(angajat &a) {

        // a.data.start nu exista..
        // pentru a accesa campul start scri a.start
        // cand ai scanf trebuie sa pui &, ca sa se poata modifica continutul variabilei in functia respectiva..
        printf("   Introduceti data inceperii:\n");
        /*
         * Nu poti folosi  scanf("%d", &a.start);//???
         * Cu acest scanf citesti un numar intreg, iar tipul de date pentru a.start e de tipul data
         * pentru a citi o data folosesti functia pe care ai creat-o mai sus
         */
        citire(a.start);
        printf("   Introduceti data incheierii:\n");
        citire(a.end);
        printf("Introduceti numele:  ");
        scanf("%s", a.nume);

        //aici e o problema cand numele e compus din 2 cuvinte
        // il pui de un cuvant si e ok
        // ideea e ca daca folosesc niste librari poate nu va functiona la fel pe windows..

        fflush(stdin);
    }

    void afisare_a(angajat &a) {
       // printf("\nData de incepere este %d, data de incheiere este %d si numele este %s\n", a.start, a.end, a.nume);//??:))
        // nu poti afisa cu printf o variabila de tip data

        printf("Datele angajatului: %s\n",a.nume);
        printf("Concediu: ");
        afisare(a.start);
        printf(" - ");
        afisare(a.end);
    }

    void suprapunere(angajat &a, angajat &b) {
        /*
         * Compilatorul imi da eroare la comparatia asta: a.start == b.end
         * nu poti compara doua variabile de tipul data
         * in schimb poti folosi o functie care sa se ocupe de asta
         */





        /*
         * eu m-am gandit cam asa
         * daca se suprapun zilele atunci a.start e intre b.start si b.end
         * SAU
         * b.start e intre a.start si a.end
         */

        // ca sa imi fie mie mai usor, pun in variabila a angajatul al carui concediu incepe primul
        if(compar(a.start,b.start)>0){
            angajat c = b;
            b = a;
            a = c;
        }

        /*
         * a: 1-15
         * b: 2-30
         * a  |-----|
         * b     |----|
         *
         * Eu mi-am imaginat perioadele astea cu segmente..
         */

        if (compar(a.end,b.start)>0){
            printf("Concediile angajatilor %s si %s se suprapun.\n",a.nume,b.nume);
            return;
        }

           // printf("Nu se suprapune");
    }

    int main() {
       // data d1, d2;
        //angajat a, b;
        int  i,j, n;
        printf("Introduceti dim tabloului:  ");
        scanf("%d", &n);
        angajat *tab = new angajat[n];

        // trebuie sa fi atenta sa initializezi variabilele..
        for (i = 0; i < n; i++) {
            //apelam functia de citire angajat, care la randul ei se ocupa de citirea datelor pt concediu..
            printf("Angajatul %d\n",i);
            citire_a(tab[i]);
        }

        printf("Lista angajatilor:\n");
        for (i = 0; i < n; i++) {
            afisare_a(tab[i]);
        }


//        int c = compar(d1, d2);
//        switch (c) {
//            case -1:
//                printf("Prima data este mai mica ca a doua");
//            case 1:
//                printf("Prima data este mai mare ca a doua");
//           //compilatorul mi-a spus sa pun default.. desi teoretic niciodata nu va mai ramanea vre-un caz in afara de 0.
//           // case 0:
//            default:
//                printf("Datele sunt egale");
//        }

        //pentru a verifica suprapunerea concediilor folosim algoritmul cu sortare cu bule..(nu stiu cum se numeste exact)
        printf("\nSuprapunerea concediilor:\n");
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++){
                suprapunere(tab[i],tab[j]);
            }

        return 0;
    }