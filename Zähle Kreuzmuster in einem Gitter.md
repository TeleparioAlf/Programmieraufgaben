# ➕ Zähle Kreuzmuster in einem Gitter

## 🎯 Ziel
Gegeben ist ein **Gitter**, das aus **Punkten (`.`)** und **`X`-Zeichen** besteht.  
Dein Programm soll ermitteln, **wie oft** das `X`-Zeichen ein **Plus-Muster (`+`)** im Gitter bildet.

Ein **Plus-Muster** besteht aus genau **5** `X`-Zeichen in folgender Anordnung:

```
 X
XXX
 X 
```

Jedes `X` kann **Teil mehrerer** `+`-Muster sein.

## 📥 Eingabe
- **Zeile 1:** Zwei ganze Zahlen `width` und `height` (Breite und Höhe des Gitters).
- **Die nächsten `height` Zeilen:**  
  - Ein String aus `width` Zeichen (`.` oder `X`).

## 📤 Ausgabe
- Eine **Zahl**, die die **Anzahl der gefundenen `+`-Muster** im Gitter angibt.

## ⚙️ Einschränkungen
- `0 < width, height < 100`

## 📌 Beispiel

### 📝 Eingabe:
```
5 4
..X..
.XXX.
..X..
.XXX.
```

### ✅ Ausgabe:
```
2
```
