## Mein Hund hat meine Diplomarbeit gefressen 🐶📄

### Hintergrund

Die Seiten einer Abschlussarbeit sind von **1 bis 5000** durchnummeriert. Nach einem Zwischenfall fehlt **genau eine** Seite. Die übrigen Seiten liegen in **beliebiger Reihenfolge** vor. Es bleibt nur Zeit für **einen einmaligen Durchlauf** über die vorhandenen Seiten. Gesucht ist die **fehlende Seitenzahl**.

**Einschränkungen (Story-begründet):**

* Nur **Grundrechenarten** (+, −, ×, ÷) stehen zur Verfügung.
* Es darf **nur einmal** ausgegeben (gedruckt) werden.
* Keine Markierungen, kein zweiter Durchlauf.

## Ziel

Gib die **Nummer der fehlenden Seite** aus.

## Eingabe

* **Zeile 1:** Eine ganze Zahl `N` — die höchste Seitennummer (im Story-Setting `N = 5000`).
* **Zeilen 2..N:** `N-1` ganze Zahlen — die **vorhandenen** Seitenzahlen in **beliebiger Reihenfolge** (je Zeile eine Zahl).

> Es ist garantiert, dass genau **eine** Seite aus dem Bereich `[1..N]` fehlt und alle anderen **genau einmal** vorkommen.

## Ausgabe

* **Zeile 1:** Die fehlende Seitenzahl.

## Nebenbedingungen / Hinweise

* Ein **einmaliger Durchlauf** über die `N-1` Zahlen genügt.
* Nutze eine **laufende Summe** und die Formel für die Summe von `1..N`, um die fehlende Zahl zu berechnen:
  `fehlend = N*(N+1)/2 − sum(vorhandene)`
* Verwende bei Bedarf einen Datentyp, der die Summe sicher aufnehmen kann (für `N=5000` genügt 32-Bit).

## Beispiel

**Eingabe**

```
5
1
2
5
3
```

**Ausgabe**

```
4
```

**Erläuterung:** Die Seiten `1,2,3,5` sind vorhanden, es fehlt `4`.
