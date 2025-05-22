# 📊 021 Histogramm-Erstellung aus Stichproben

## 📜 Beschreibung
Gegeben eine Reihe von Stichproben, soll dein Programm ein Histogramm der Werte zeichnen.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Werte angibt.
- **Zeile 2:** `N` Stichprobenwerte, getrennt durch Leerzeichen.

## 📤 Ausgabe
- **9 Zeilen:** Für `i` von **1 bis 9**, gibt das Programm aus:  
  - Die **Zahl `i`**,  
  - gefolgt von einem **Doppelpunkt (:)**,  
  - gefolgt von einer Reihe von **`V` Sternchen (`*`)**, wobei `V` die Anzahl der Vorkommen von `i` in der Datenreihe ist.

## ⚙️ Einschränkungen
- `1 ≤ N ≤ 100`
- `1 ≤` **Stichprobenwert** `≤ 9`

## 📌 Beispiel

**Eingabe:**
```
2
1 8
```

**Ausgabe:**
```
1:*
2:
3:
4:
5:
6:
7:
8:*
9:
```
