# 🔄 Zyklisches Springen in einer Liste

## 🎯 Ziel
Gegeben ist eine Liste von `N` ganzen Zahlen, die wir **`A`** nennen.  
Wir beginnen beim **ersten Element** (Index `0`) und bewegen uns wiederholt wie folgt:

➡️ Der **Wert des aktuellen Elements** gibt den **Index** des nächsten Elements an, zu dem wir springen.  

Deine Aufgabe ist es herauszufinden, **ob wir jemals wieder zum ersten Element (`Index 0`) zurückkehren**.

## 🔢 Beispiele:

### ✅ Beispiel 1 (Rückkehr möglich):
Liste: `3 4 2 1 0`  
1️⃣ Starte bei `A[0] = 3`, springe zu `A[3] = 1`  
2️⃣ `A[1] = 4`, springe zu `A[4] = 0`  
3️⃣ `A[0] = 3`, **zurück am Anfang** ✅ → **true**

### ❌ Beispiel 2 (Kein Zurückkehren möglich):
Liste: `3 4 2 1 1`  
1️⃣ Starte bei `A[0] = 3`, springe zu `A[3] = 1`  
2️⃣ `A[1] = 4`, springe zu `A[4] = 1`  
3️⃣ **Endlosschleife** ohne `0` ❌ → **false**

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Elemente in der Liste angibt.
- **Die nächsten `N` Zeilen:** Eine ganze Zahl `A[i]`, die das Element der Liste darstellt.

## 📤 Ausgabe
- `true`, falls der Prozess **zurück zu `A[0]`** führt.
- `false`, falls dies **niemals** geschieht.

## ⚙️ Einschränkungen
- `1 ≤ N ≤ 300`
- `0 ≤ A[i] < N`

## 📌 Beispiel

### 📝 Eingabe:
```
5
3
4
2
1
0
```

### ✅ Ausgabe:
```
true
```
