# 🎟️ Glücksticket-Überprüfung

## 🎯 Ziel
Ein Ticket hat eine **6-stellige Nummer** im Bereich von `000000` bis `999999`.  
Es gilt als **Glücksticket**, wenn die **Summe der ersten drei Ziffern** gleich der **Summe der letzten drei Ziffern** ist.

Du erhältst `N` Ticketnummern.  
Für jede Ticketnummer muss dein Programm `true` ausgeben, wenn es ein Glücksticket ist, andernfalls `false`.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Ticketnummern angibt.
- **Die nächsten `N` Zeilen:**  
  - Eine Zeichenkette `T`, die eine **6-stellige Ticketnummer** darstellt.

## 📤 Ausgabe
- **`N` Zeilen**, wobei jede Zeile entweder `true` (glückliches Ticket) oder `false` (kein Glücksticket) enthält.

## ⚙️ Einschränkungen
- `0 < N ≤ 10`
- `T` besteht nur aus **Ziffern (0–9)**.

## 📌 Beispiel

### 📝 Eingabe:
```
4
123806
111222
000000
557766
```

### ✅ Ausgabe:
```
true
false
true
false
```
