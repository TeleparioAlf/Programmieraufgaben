# 🧮 040 Zahlenraten-Spiel

## 🎯 Ziel
Entwickle ein Programm, das ein **Zahlenraten-Spiel** simuliert.  
Der Computer wählt zufällig eine Zahl, und der Spieler muss diese Zahl erraten.

## 📥 Eingabe
- Der Spieler gibt wiederholt eine Zahl ein, bis er die richtige Zahl errät.

## 📤 Ausgabe
- Nach jedem Versuch gibt das Programm Hinweise:
  - `Zu hoch!` 🎯, wenn die geratene Zahl größer ist als die Zielzahl.
  - `Zu niedrig!` 🎯, wenn die geratene Zahl kleiner ist als die Zielzahl.
  - `Herzlichen Glückwunsch! Sie haben die Zahl erraten.` 🎉, wenn die geratene Zahl der Zielzahl entspricht.

## ⚙️ Einschränkungen
- Die Zielzahl ist eine ganze Zahl im Bereich von `1` bis `100`.

## 📌 Beispiel

### 📝 Ablauf:
1. Der Computer wählt zufällig die Zahl `42`.
2. Der Spieler gibt `50` ein.
   - Ausgabe: `Zu hoch!` 🎯
3. Der Spieler gibt `30` ein.
   - Ausgabe: `Zu niedrig!` 🎯
4. Der Spieler gibt `42` ein.
   - Ausgabe: `Herzlichen Glückwunsch! Sie haben die Zahl erraten.` 🎉
