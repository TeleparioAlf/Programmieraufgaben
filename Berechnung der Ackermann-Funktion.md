# 🧮 Berechnung der Ackermann-Funktion

## 🎯 Ziel
Implementiere die **Ackermann-Funktion**, eine bekannte rekursive mathematische Funktion, die wie folgt definiert ist:

\[
A(m, n) =
\begin{cases} 
n + 1 & \text{wenn } m = 0 \\
A(m - 1, 1) & \text{wenn } m > 0 \text{ und } n = 0 \\
A(m - 1, A(m, n - 1)) & \text{wenn } m > 0 \text{ und } n > 0
\end{cases}
\]

## 📥 Eingabe
- Zwei nichtnegative ganze Zahlen `m` und `n`.

## 📤 Ausgabe
- Das Ergebnis der Ackermann-Funktion `A(m, n)`.

## ⚠️ Hinweise
- Die Ackermann-Funktion wächst sehr schnell. Schon für kleine Werte von `m` und `n` können die Ergebnisse sehr groß werden oder zu tiefer Rekursion führen.

## 📌 Beispiel

### 📝 Eingabe:
```
m = 2
n = 3
```

### ✅ Ausgabe:
```
9
```
