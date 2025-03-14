# 🔐 Überprüfung einer verschlüsselten Nachricht

## 🎯 Ziel
Du musst bestimmen, ob das erste Wort eine **verschlüsselte Version** des zweiten Wortes ist.  
Dazu wird eine **Buchstaben-Substitutionsverschlüsselung** verwendet, bei der **jeder Buchstabe** durch  
einen **festen Versatz** im Alphabet ersetzt wird (vorwärts oder rückwärts).

### 🛠 Beispiel:
Wenn jeder Buchstabe **um 4 Stellen verschoben wird**, dann wird:
```
A → E
```

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `A` (verschlüsselte Buchstabenfolge, nur Großbuchstaben).
- **Zeile 2:** Eine Zeichenkette `B` (unverschlüsseltes Wort, nur Großbuchstaben).

## 📤 Ausgabe
- **Zeile 1:** `true`, wenn `A` eine **verschlüsselte Version** von `B` ist,  
  andernfalls `false`.

## ⚙️ Einschränkungen
- Die **Länge** von `A` und `B` ist gleich: `len(A) = len(B)`.
- `2 < len(A), len(B) ≤ 20`

## 📌 Beispiel

### 📝 Eingabe:
```
TUSPH
STRONG
```

### ✅ Ausgabe:
```
true
```
