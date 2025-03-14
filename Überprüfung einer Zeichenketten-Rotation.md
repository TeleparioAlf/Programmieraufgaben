# 🔄 Überprüfung einer Zeichenketten-Rotation

## 🎯 Ziel
Eine **Zeichenkettenrotation** erfolgt, indem jedes Zeichen einer Zeichenkette  
**nach rechts oder links verschoben wird**.  

- Zeichen, die "herausgeschoben" werden, kehren auf der **gegenüberliegenden Seite** zurück.  
- Beispiel:
  - `abc` **1x nach rechts rotieren** → `cab`
  - `abc` **2x nach rechts rotieren** → `bca`

## 🔍 Aufgabe
Gegeben sind zwei Zeichenketten **`s1`** und **`s2`**.  
Dein Programm soll überprüfen, ob `s2` eine **Rotation** (in beliebiger Anzahl) von `s1` ist.  
Die Überprüfung **unterscheidet nicht zwischen Groß- und Kleinschreibung**.

## 🔢 Beispiele:

### ✅ Beispiel 1 (Rotation möglich)
- **Eingabe:**  
  `s1 = AbcD`, `s2 = CDab`
- **Erwartete Ausgabe:**  
  `true`  
- **Erklärung:**  
  `s2` kann **2x nach rechts** gedreht werden, um `s1` zu ergeben:  
  `(CDab → bCda → abCD)`

### ❌ Beispiel 2 (Keine Rotation möglich)
- **Eingabe:**  
  `s1 = ZXYW`, `s2 = XYzW`
- **Erwartete Ausgabe:**  
  `false`  
- **Erklärung:**  
  Egal, wie oft `s2` rotiert wird, es wird **niemals gleich `s1` sein**.

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `s1`.
- **Zeile 2:** Eine Zeichenkette `s2`.

## 📤 Ausgabe
- **Eine einzelne Zeichenkette:**  
  - `true`, falls `s2` eine Rotation von `s1` ist.  
  - `false`, falls nicht.

## ⚙️ Einschränkungen
- `1 ≤ Länge von s1, s2 ≤ 100`
- `s1` und `s2` können **beliebige ASCII-Zeichen** enthalten.

## 📌 Beispiel

### 📝 Eingabe:
```
AbcD
CDab
```

### ✅ Ausgabe:
```
true
```
