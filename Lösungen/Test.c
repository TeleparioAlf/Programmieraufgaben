#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

// Berechnet die Quersumme einer Zahl (Summe ihrer Ziffern)
static inline uint64_t quersumme(uint64_t zahl) {
    uint64_t summe = 0;
    while (zahl > 0) {
        summe += zahl % 10;
        zahl /= 10;
    }
    return summe;
}

// Gibt die nächste Zahl im digitalen Fluss zurück: Zahl + Quersumme
static inline uint64_t naechsterWert(uint64_t zahl) {
    return zahl + quersumme(zahl);
}

// Bestimmt die Klasse des Flusses (1, 3 oder 9) basierend auf zahl mod 9
static inline int flussKlasse(uint64_t zahl) {
    int r = zahl % 9;
    if (r == 0) return 9;
    if ((r % 3) == 0) return 3;
    return 1;
}

int main(void) {
    uint64_t wert1, wert2;
    // Einlesen der beiden Startwerte
    scanf("%" SCNu64 " %" SCNu64, &wert1, &wert2);

    // Prüfen, ob beide Flüsse zur gleichen Klasse gehören
    if (flussKlasse(wert1) != flussKlasse(wert2)) {
        printf("Keine gemeinsame Zahl möglich\n");
        return EXIT_SUCCESS;
    }

    // Solange kein Treffpunkt gefunden ist, Flüsse fortsetzen
    while (wert1 != wert2) {
        if (wert1 < wert2) wert1 = naechsterWert(wert1);
        else wert2 = naechsterWert(wert2);
    }

    // Gemeinsamen Treffpunkt ausgeben
    printf("%" PRIu64 "\n", wert1);
    return EXIT_SUCCESS;
}
