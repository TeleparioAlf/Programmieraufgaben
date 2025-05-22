# 💰 038 Wechselgeld mit den wenigsten Münzen berechnen

## 🎯 Ziel
Gegeben ist ein **Geldbetrag `S`** in Dollar.  
Dein Programm soll das Wechselgeld für diesen Betrag mit der **geringsten Anzahl an Münzen** berechnen  
und für jede verwendete Münze die Anzahl ausgeben.  

Hier sind die verfügbaren Münzen und ihre Werte:

| Münze           | Wert |
|----------------|------|
| **Dollar Coins** 🪙  | `$1.00` |
| **Quarters** 🏛️  | `$0.25` |
| **Dimes** 🔟  | `$0.10` |
| **Nickels** 5️⃣  | `$0.05` |
| **Pennies** 1️⃣  | `$0.01` |

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `S`, die mit `$` beginnt und den Dollar-Betrag enthält.

## 📤 Ausgabe
- **Zeile 1:** Eine **Liste von Zahlen**, getrennt durch ein Leerzeichen `" "`,  
  die angibt, wie viele **Dollar-Münzen, Quarters, Dimes, Nickels und Pennies** benötigt werden  
  (in genau dieser Reihenfolge).

## ⚙️ Einschränkungen
- `$0.00 < S < $10.00`
- `S` ist immer auf **zwei Dezimalstellen** genau angegeben.

## 📌 Beispiel

### 📝 Eingabe:
```
$4.58
```

### ✅ Ausgabe:
```
4 2 0 1 3
```
**Erklärung:**  
- **4 Dollar Coins** (`4 × $1.00 = $4.00`)
- **2 Quarters** (`2 × $0.25 = $0.50`)
- **0 Dimes**
- **1 Nickel** (`1 × $0.05 = $0.05`)
- **3 Pennies** (`3 × $0.01 = $0.03`)
