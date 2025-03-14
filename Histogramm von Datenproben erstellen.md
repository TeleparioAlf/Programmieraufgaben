# 📊 Histogramm von Datenproben erstellen

## 🎯 Ziel
Gegeben ist eine Reihe von Datenwerten. Dein Programm soll ein **Histogramm** dieser Werte zeichnen.

---

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Werte angibt.
- **Zeile 2:** `N` Werte, getrennt durch Leerzeichen.

---

## 📤 Ausgabe
- **9 Zeilen:**  
  - Für jede Zahl `i` von **1 bis 9** wird ausgegeben:  
    - Die Zahl `i`
    - Ein Doppelpunkt (`:`)
    - Eine Reihe von `V` Sternchen (`*`), wobei `V` die Häufigkeit der Zahl `i` in den Daten darstellt.

---

## ⚙️ Einschränkungen
- `1 ≤ N ≤ 100`
- `1 ≤` **Wert einer Probe** `≤ 9`

---

## 📌 Beispiel

### 📝 Eingabe:
```
2
1 8
```

### ✅ Ausgabe:
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
