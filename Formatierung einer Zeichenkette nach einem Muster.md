# 🔠 Formatierung einer Zeichenkette nach einem Muster

## 🎯 Ziel
Gegeben sind eine **Zeichenkette `S`** und ein **Format `F`**.  
Dein Programm soll die Zeichenkette so formatieren, dass sie dem angegebenen Muster `F` entspricht.

## 🔢 Regeln:
- Das Format `F` kann Buchstaben, Satzzeichen oder Symbole enthalten.
- Die Zeichen `x` und `X` im Format stehen für Zeichen aus `S`:
  - **`x`** → Kleinbuchstaben (`a-z`)
  - **`X`** → Großbuchstaben (`A-Z`)
- Zeichen, die **keine `x` oder `X` sind**, müssen unverändert in der Ausgabe erscheinen.

### 📌 Beispiele:
- **Format:** `xXxx`  
  **Zeichenkette:** `duck`  
  **Erwartete Ausgabe:** `dUck`

- **Format:** `Xxx, Xx.`  
  **Zeichenkette:** `samJr`  
  **Erwartete Ausgabe:** `Sam, Jr.`

- **Format:** `RE: xXxXxx`  
  **Zeichenkette:** `banana`  
  **Erwartete Ausgabe:** `RE: bAnAna`

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `S`, die nur Buchstaben enthält.
- **Zeile 2:** Eine Zeichenkette `F`, die das Format beschreibt.

## 📤 Ausgabe
- Eine Zeichenkette, die `S` nach den Regeln des Formats `F` formatiert.

## ⚙️ Einschränkungen
- `S` enthält **nur Buchstaben**.
- `Länge von F < 250`
- Die Anzahl der `x` und `X` in `F` ist immer gleich der Anzahl der Buchstaben in `S`.

## 📌 Beispiel

### 📝 Eingabe:
```
sAmMyJr
Xxxxx, Xx.
```

### ✅ Ausgabe:
```
Sammy, Jr.
```
