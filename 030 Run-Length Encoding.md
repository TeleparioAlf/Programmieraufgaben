# 🔠 030 Run-Length Encoding eines `N × N` Gitters

## 🎯 Ziel
Dein Programm soll ein **`N × N`-Gitter**, das nur die Zeichen `A`, `B` oder `C` enthält,  
mithilfe von **Run-Length Encoding** (Lauflängenkodierung) **komprimieren**.

Die Lauflängenkodierung speichert **aufeinanderfolgende gleiche Zeichen** als:
- `Anzahl` gefolgt vom `Zeichen` (z. B. `AAA` → `3A`).
- Falls ein Zeichen **nur einmal vorkommt**, wird die `1` weggelassen (z. B. `B` bleibt `B`).

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Größe des quadratischen Gitters angibt.
- **Die nächsten `N` Zeilen:** Zeichenketten der Länge `N` mit den Zeichen `A`, `B` oder `C`.

## 📤 Ausgabe
- **Eine einzige Zeichenkette**, die das komprimierte Gitter mit **Run-Length Encoding** enthält.

## 📝 Regeln für aufeinanderfolgende Zeichen:
1. **Gleiche Zeichen in einer Zeile** gelten als aufeinanderfolgend (`AAA` → `3A`).
2. **Gleiche Zeichen am Zeilenende & Zeilenanfang** gelten als aufeinanderfolgend:
   ```
   AAB
   BBA
   ```
   → wird zu **"2A B 2B A"**.
3. Falls ein Zeichen **einzeln vorkommt**, bleibt es unverändert (`B` bleibt `B`).

## ⚙️ Einschränkungen
- `3 ≤ N ≤ 7`

## 📌 Beispiel

### 📝 Eingabe:
```
3
AAA
BBB
AAA
```

### ✅ Ausgabe:
```
3A3B3A
```
