# 🧃 Fruchtsaft herstellen

## 🎯 Ziel
Du erhältst eine Menge **Früchte** und musst aus ihnen **Saft** herstellen.  

- Jede **Fruchtart** wird durch einen **Buchstaben** (`c`) dargestellt.  
- Jede Fruchtart benötigt eine **bestimmte Anzahl von Früchten (`g`)**, um ein Glas Saft zu produzieren.  
- Schließlich erhältst du eine **Liste der verfügbaren Früchte (`fruits`)**, die du verwenden kannst.

### 📌 Wichtige Regel:
**Wir mischen keine verschiedenen Früchte in ein Glas!**  
Jede **Fruchtart** produziert ihren eigenen Saft.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `n`, die die Anzahl der verschiedenen Fruchtarten angibt.
- **Die nächsten `n` Zeilen:**  
  - Ein Zeichen `c`: der Buchstabe, der die Fruchtart repräsentiert.
  - Eine ganze Zahl `g`: die Anzahl der benötigten Früchte für **ein Glas Saft**.
- **Letzte Zeile:** Eine Zeichenkette `fruits`, die die verfügbaren Früchte enthält.

## 📤 Ausgabe
- **Eine Zahl**, die angibt, wie viele **volle Gläser Saft** hergestellt werden können.

## ⚙️ Einschränkungen
- `0 < n < 30`
- `0 < g < 10`

## 📌 Beispiel

### 📝 Eingabe:
```
1
F 3
FFFFFF
```

### ✅ Ausgabe:
```
2
```
