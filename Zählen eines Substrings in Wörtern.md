# 🔍 Zählen eines Substrings in Wörtern

## 🎯 Ziel
Deine Aufgabe ist es, zu zählen, **wie oft** der **Substring `S`** in **beliebigen Wörtern** der Zeichenkette `text` vorkommt,  
**unabhängig von der Groß-/Kleinschreibung**.  

Falls `S` **mehrmals in einem einzelnen Wort erscheint**, soll es **nur einmal** gezählt werden.

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `S`, der zu suchende Substring.
- **Zeile 2:** Eine Zeichenkette `text`, die alle zu durchsuchenden Wörter enthält, getrennt durch Leerzeichen.

## 📤 Ausgabe
- Eine **einzelne Zeile**, die angibt, wie oft `S` in **verschiedenen Wörtern** aus `text` vorkommt.

## ⚙️ Einschränkungen
- `0 < Länge von S < 10`
- `0 < Länge von text < 256`

## 📌 Beispiel

### Eingabe:
```
hello
hello World
```

### Ausgabe:
```
1
```
