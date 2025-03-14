# 🔢 Defizienz von Zahlen

## 🎯 Ziel
Eine **defiziente Zahl** ist eine Zahl, bei der die **Summe ihrer Teiler kleiner ist als das Doppelte der Zahl**.  
Jede defiziente Zahl hat eine **Defizienz**, die sich folgendermaßen berechnet:

\[
\text{Defizienz} = (2 \times \text{Zahl}) - \text{Summe der Teiler}
\]

### 📌 Beispiel:
Betrachten wir die Zahl `21`:
- Ihre Teiler sind **1, 3, 7 und 21**.
- Die Summe dieser Teiler ist **32**.
- Das Doppelte von `21` ist **42**.
- Da `32 < 42`, ist `21` eine **defiziente Zahl**.
- Ihre **Defizienz** ist **10**, weil `42 - 32 = 10`.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der zu überprüfenden Bereiche angibt.
- **Die nächsten `N` Zeilen:**  
  - Zwei ganze Zahlen `A` und `B`, die den **inklusiven Bereich** definieren.

## 📤 Ausgabe
- **`N` Zeilen:**  
  - Jede Zeile enthält die **Summe der Defizienz aller defizienten Zahlen** innerhalb des jeweiligen Bereichs.

## ⚙️ Einschränkungen
- `N ≤ 170`
- `0 ≤ A ≤ B ≤ 10 000`

## 📌 Beispiel

### 📝 Eingabe:
```
4
1 3
4 8
5 10
1 10
```

### ✅ Ausgabe:
```
4
11
12
23
```
