# 🧮 Zellenzähler – Nachbarschaftsanalyse im Gitter (~ 20 Min.)

## 📋 **Aufgabenstellung**

Gegeben ist ein Gitter aus Einsen (`1`) und Nullen (`0`).
Dein Programm soll zählen, wie viele **benachbarte Zellen** den Wert `1` haben – ausgehend von einer gegebenen Zelle mit den Koordinaten `(X, Y)`.

> ⚠️ Es können **maximal 8 Nachbarn** existieren: horizontal, vertikal und diagonal.

## 📥 **Eingabe**

1️⃣ **Zeile 1**: Zwei durch Leerzeichen getrennte Ganzzahlen `W` und `H`
→ Breite (`W`) und Höhe (`H`) des Gitters

2️⃣ **Zeile 2**: Zwei durch Leerzeichen getrennte Ganzzahlen `X` und `Y`
→ Koordinaten der Zelle, für die die Nachbarn gezählt werden sollen

3️⃣ **Nächste H Zeilen**:
→ Jeweils eine Zeichenkette mit `W` Zeichen (`0` oder `1`)
→ `0` = leere Zelle, `1` = bewohnte Zelle

## 📤 **Ausgabe**

Ein einzelner Integer-Wert:
→ Die Anzahl der **bewohnten Nachbarzellen** der Zelle an Position `(X, Y)`

## 📏 **Einschränkungen**

| Bedingung     | Wertebereich           |
| ------------- | ---------------------- |
| `0 < W < 100` | Breite des Gitters     |
| `0 < H < 100` | Höhe des Gitters       |
| `0 ≤ X < W`   | X-Koordinate der Zelle |
| `0 ≤ Y < H`   | Y-Koordinate der Zelle |

## 📌 **Beispiel**

### 🧾 Eingabe:

```
4 3
1 1
1000
0001
0100
```

### ✅ Ausgabe:

```
2
```

🧠 **Erklärung:**

Die Zelle `(1, 1)` hat zwei benachbarte Zellen mit dem Wert `1`:

* `(0, 0)` → `1`
* `(2, 2)` → `1`
