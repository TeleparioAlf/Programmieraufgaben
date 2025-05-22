# 👏 007 Clap@7 – Ein Zählspiel mit Klatschen

## 🎯 Ziel
Clap@7 ist ein Spiel, das von einer Gruppe von Personen gespielt wird.  
Jeder Spieler nennt der Reihe nach Zahlen in **aufsteigender Reihenfolge**, beginnend bei `1`.  

Allerdings muss **geklatscht** (`CLAP`) werden, anstatt eine Zahl zu sagen, wenn eine der folgenden Regeln zutrifft:

- Die Zahl ist **durch 7 teilbar**.
- Die Zahl enthält die **Ziffer 7**.
- Die **Quersumme** der Zahl ist **durch 7 teilbar**.

Falls ein Spieler nicht die richtige Aktion durchführt, verliert er das Spiel.

### 🔢 Beispiel eines Spiels mit drei Spielern (A, B und C):

```
A: 1
B: 2
C: 3
A: 4
B: 5
C: 6
A: CLAP  (7 ist durch 7 teilbar)
B: 8
C: 9
A: 10
B: 11
C: 12
A: 13
B: CLAP  (14 ist durch 7 teilbar)
C: 15
A: CLAP  (Quersumme der Zahl ist durch 7 teilbar)
B: CLAP  (17 enthält die Ziffer 7)
C: 18
```

Wenn das Spiel bei `N` beendet wird (inklusive `N`), soll dein Programm die **Gesamtzahl der Klatscher (`CLAP`)** berechnen.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die angibt, bei welcher Zahl das Spiel endet.

## 📤 Ausgabe
- Die Gesamtanzahl der **CLAPS**.

## ⚙️ Einschränkungen
- `1 ≤ N ≤ 3 000 000`

## 📌 Beispiel

### Eingabe:
```
17
```

### Ausgabe:
```
4
```
