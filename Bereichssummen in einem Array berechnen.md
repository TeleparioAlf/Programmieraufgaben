# 🔢 Bereichssummen in einem Array berechnen (~ 8 Min.)

## 🎯 Ziel
Du erhältst ein Array mit `N` ganzen Zahlen und eine Liste von `M` **inklusiven** Bereichen `[a, b]`.  

Für jeden Bereich soll das Programm die **Summe** der Werte im Array für Indizes zwischen `a` und `b` (einschließlich) ausgeben.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Zahlen in der Liste angibt.
- **Zeile 2:** `N` durch Leerzeichen getrennte ganze Zahlen im Bereich von `-100` bis `100`.
- **Zeile 3:** Eine ganze Zahl `M`, die die Anzahl der Bereiche angibt.
- **Die nächsten `M` Zeilen:** Jeweils zwei durch Leerzeichen getrennte ganze Zahlen `startRange` und `endRange`,  
  die den Bereich angeben.  
  - **Hinweis:** Das erste Element der Liste befindet sich bei **Index 0**.

## 📤 Ausgabe
- **`M` Zeilen:** Für jeden Bereich wird die **Summe** der Werte im Array zwischen `a` und `b` ausgegeben.

## ⚙️ Einschränkungen
- `0 < N < 100`
- `0 < M < 100`

## 📌 Beispiel

### Eingabe:
```
4
4 2 5 8
3
0 3
1 2
3 3
```

### Ausgabe:
```
19
7
8
```
