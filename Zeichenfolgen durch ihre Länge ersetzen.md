# 🔄 Zeichenfolgen durch ihre Länge ersetzen

## 🎯 Ziel
Gegeben ist ein Text `S`.  
Ersetze alle **aufeinanderfolgenden Vorkommen** eines bestimmten Zeichens `C`  
durch die **Anzahl der Zeichen in dieser Sequenz**.

📝 **Hinweis:**  
Der Text enthält nur **ASCII-Zeichen**.

## 📥 Eingabe
- **Zeile 1:** Ein Zeichen `C`, das ersetzt werden soll.
- **Zeile 2:** Eine Zeichenkette `S`, die den zu verarbeitenden Text enthält.

## 📤 Ausgabe
- **Zeile 1:** Die Zeichenkette `S`, in der jede Sequenz von `C`  
  durch die **Anzahl ihrer aufeinanderfolgenden Vorkommen** ersetzt wurde.

## ⚙️ Einschränkungen
- `C` besteht aus genau **einem Zeichen**.
- `1 ≤ Länge von S ≤ 150`.

## 📌 Beispiel

### 📝 Eingabe:
```
l
Hello world.
```

### ✅ Ausgabe:
```
He2o wor2d.
```
