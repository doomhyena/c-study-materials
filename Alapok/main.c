#include <stdio.h>

int main () {
    // Egész számok (integers)
    int egesz = 42;
    
    // Lebegőpontos számok (floating point)
    float lebegopontos = 3.14;
    double nagyobbPontos = 3.141592653589;
    
    // Karakterek (characters)
    char karakter = 'A';
    
    // Logikai érték (bár C-ben nincs külön boolean típus, 0=hamis, nem 0=igaz)
    int logikai = 1; // igaz
    
    // Konstans deklarálása
    const int KONSTANS = 100;
    
    // Típusok kiíratása
    printf("Egesz szam: %d\n", egesz);
    printf("Lebegopontos szam: %f\n", lebegopontos); 
    printf("Nagy pontossagu szam: %lf\n", nagyobbPontos);
    printf("Karakter: %c\n", karakter);
    printf("Logikai ertek: %d\n", logikai);
    printf("Konstans: %d\n", KONSTANS);
    
    int szam = 10;
    
    // Egyszerű if-else
    if (szam > 5) {
        printf("A szám nagyobb, mint 5\n");
    } else {
        printf("A szám kisebb vagy egyenlő 5-tel\n");
    }
    
    // Többágú elágazás (if-else if-else)
    if (szam < 0) {
        printf("A szám negatív\n");
    } else if (szam == 0) {
        printf("A szám nulla\n");
    } else {
        printf("A szám pozitív\n");
    }
    
    // Egymásba ágyazott if
    if (szam >= 0) {
        if (szam % 2 == 0) {
            printf("A szám páros és nem negatív\n");
        } else {
            printf("A szám páratlan és nem negatív\n");
        }
    }


    // Ciklusok
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    int j = 0;
    while (j < 5) {
        printf("j = %d\n", j);
        j++;
    }
    
    // Switch példa
    int valasztas = 2;
    switch (valasztas) {
        case 1:
            printf("Első opció\n");
            break;
        case 2:
            printf("Második opció\n");
            break;
        case 3:
            printf("Harmadik opció\n");
            break;
        default:
            printf("Ismeretlen opció\n");
    }

    // Break és continue példák
    printf("\nBreak példa:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Kilép a ciklusból ha i == 5
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\nContinue példa:\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Páros számokat kihagy
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}