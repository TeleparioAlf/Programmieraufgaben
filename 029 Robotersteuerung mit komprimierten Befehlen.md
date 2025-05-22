# 🤖 029 Robotersteuerung mit komprimierten Befehlen (~ 25 Min.)

## 🎯 Ziel
Wir möchten einen Roboter mit einer bestimmten Menge von Befehlen steuern:  
**up, down, left, right**.

Leider mag unser Roboter keine langen Anweisungen, er versteht nur die Symbole:  
`^` (hoch), `v` (runter), `<` (links), `>` (rechts).

Zusätzlich möchten wir wiederholte Befehle vermeiden. Falls ein Befehl mehrmals hintereinander vorkommt,  
geben wir die Anzahl direkt nach dem Symbol an:  
`up up up` → `^3`

## 📥 Eingabe
- Eine Zeile mit Befehlen, getrennt durch Leerzeichen.

## 📤 Ausgabe
- Eine Zeile mit den komprimierten Befehlen, ohne Leerzeichen.

## ⚙️ Einschränkungen
- Erlaubte Befehle: **up, down, left, right**  
- Anzahl der Befehle: `< 30`

## 📌 Beispiel

| 📝 Eingabe | ✅ Ausgabe |
|------------|-----------|
| up up right down left | ^2>v< |
