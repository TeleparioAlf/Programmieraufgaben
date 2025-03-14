# 🔠 Extrahiere Wörter von den Diagonalen eines Gitters

## 🎯 Ziel
Gegeben ist ein **Textgitter** der Größe `N × N`.  
Dein Programm soll **die Wörter aus den Haupt- und Nebendiagonalen extrahieren** und ausgeben.

🔹 **Hauptdiagonale:** Verläuft von der **oberen linken Ecke** zur **unteren rechten Ecke**.  
🔹 **Nebendiagonale:** Verläuft von der **oberen rechten Ecke** zur **unteren linken Ecke**.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Größe des Gitters angibt.
- **Die nächsten `N` Zeilen:**  
  - Jeweils eine Zeichenkette mit `N` **Kleinbuchstaben**.

## 📤 Ausgabe
- Zwei Wörter, extrahiert aus den **Diagonalen**, getrennt durch ein Leerzeichen.

## ⚙️ Einschränkungen
- `0 < N ≤ 10`
- Das Gitter enthält **nur lateinische Kleinbuchstaben** (`a-z`).

## 📌 Beispiel

### 📝 Eingabe:
```
4
mooa
oano
otio
ioon
```

### ✅ Ausgabe:
```
main anti
```
