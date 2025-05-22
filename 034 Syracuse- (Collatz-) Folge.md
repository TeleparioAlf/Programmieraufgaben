# 🔢 034 Syracuse- (Collatz-) Folge (~ 8 Min.)

## 📜 Beschreibung
Die Syracuse- oder Collatz-Folge wird wie folgt definiert:  
Gegeben eine ganze Zahl `N > 0`, wenden wir die folgenden Operationen an, solange die Zahl nicht `1` ist:

- Falls die Zahl **gerade** ist, wird sie durch `2` geteilt.
- Falls die Zahl **ungerade** ist, wird sie mit `3` multipliziert und `1` addiert.

Das Programm soll die Syracuse-Folge der Zahl `N` berechnen und ausgeben, bis die Zahl `1` erreicht ist.


## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Sequenz startet.


## 📤 Ausgabe
- **Zeile 1:** Die Werte der Syracuse-Folge, durch Leerzeichen getrennt.


## ⚙️ Einschränkungen
- `1 ≤ N < 100`


## 📌 Beispiel

| 📝 Eingabe | ✅ Ausgabe |
|------------|-----------|
| 5 | 5 16 8 4 2 1 |

