# 🔍 Überprüfung eines Benutzernamens

## 🎯 Ziel
Dein Programm soll prüfen, ob ein gegebener **Benutzername** `U` **gültig** ist.  

Ein **gültiger Benutzername** muss folgende Anforderungen erfüllen:
- **Mindestens 3 Zeichen lang**
- **Höchstens 20 Zeichen lang**
- **Besteht nur aus Buchstaben (`a-z`, `A-Z`) und Ziffern (`0-9`)**

Falls der Benutzername diese Anforderungen erfüllt, gib `VALID` aus,  
ansonsten gib `INVALID` aus.

## 📥 Eingabe
- **Eine Zeichenkette `U`**, die den Benutzernamen enthält.

## 📤 Ausgabe
- `VALID`, falls `U` alle Anforderungen erfüllt.
- `INVALID`, falls `U` **nicht** alle Anforderungen erfüllt.

## ⚙️ Einschränkungen
- `Länge von U ≤ 64`

## 📌 Beispiel

### 📝 Eingabe:
```
Username123
```

### ✅ Ausgabe:
```
VALID
```
