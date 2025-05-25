# 🏗️ 003 Bau einer Pyramide aus Blöcken

## 🎯 Ziel
Gegeben ist eine Anzahl `N` von Blöcken.  
Dein Programm soll die **Höhe der höchsten möglichen 2D-Pyramide** ermitteln, die gebaut werden kann,  
sowie die Anzahl der **verbleibenden ungenutzten Blöcke** ausgeben.

## 📐 Regeln zur Pyramidenbildung:
- Eine Pyramide der **Höhe `H`** hat `H` Ebenen.
- Die unterste Ebene enthält **H Blöcke**, die darüberliegende **H-1** Blöcke usw.
- Die **Summe der Blöcke** in einer `H`-stufigen Pyramide wird berechnet als:
  ```
  S = 1 + 2 + 3 + ... + H = H * (H + 1) / 2
  ```
- Falls `N` nicht ausreicht, um eine vollständige Pyramide zu bilden,  
  verbleiben `R` ungenutzte Blöcke.

# Pyramide aus 8 Blöcken in ASCII-Art

Die folgende Darstellung zeigt, wie aus 8 Blöcken eine Pyramide der Höhe 3 entsteht, mit 2 verbleibenden Blöcken:

```plaintext
               8 blocks

    [ ][ ][ ]   [ ][ ]       →       Pyramide Höhe 3         +  2 restliche Blöcke
    [ ][ ][ ]                  [ ][ ] [ ] [ ] [ ]
    [ ][ ]                    [ ][ ][ ]

    Gesamt:                    [ ]
                              [ ][ ]
                              [ ][ ][ ]    +  [ ][ ]
```


## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der verfügbaren Blöcke angibt.

## 📤 Ausgabe
- **Zeile 1:** Zwei ganze Zahlen:
  - `H`: Die maximale Höhe der Pyramide, die mit `N` gebaut werden kann.
  - `R`: Die Anzahl der verbleibenden Blöcke.

## ⚙️ Einschränkungen
- `0 ≤ N < 50 000`

## 📌 Beispiel

### 📝 Eingabe:
```
10
```

### ✅ Ausgabe:
```
4 0
```
