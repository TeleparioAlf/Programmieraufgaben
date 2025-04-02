# 🔐 Nachricht dekodieren

## 🎯 Ziel
Deine Aufgabe ist es, eine **verschlüsselte Nachricht zu dekodieren**, indem du folgende Schritte ausführst:

1) **Zähle die Anzahl der Zeichen** in der gegebenen Nachricht.
2) **Ordne die Zeichen in einem quadratischen Raster** an, von **links nach rechts** und **von oben nach unten**.
3) **Lese die Nachricht** aus der resultierenden Matrix **von oben nach unten und von links nach rechts**.

### 🔍 Beispiel für das Dekodieren:

#### 1️⃣ Gegeben eine Zeichenkette:
```
CiaondecA  (9 Zeichen)
```

#### 2️⃣ Teile sie in gleiche Zeilen und Spalten auf (hier: **3 Zeilen, 3 Spalten**):
```
cia
onm
dGe
```

#### 3️⃣ Lies die Zeichen **spaltenweise** von oben nach unten:
```
CodinGame
```

Viel Erfolg beim Dekodieren! 🕵️‍♂️

---

## 📥 Eingabe
- **Eine Zeichenkette `message`**.  
  - Die Quadratwurzel der Anzahl der Zeichen ist **immer eine ganze Zahl**.

## 📤 Ausgabe
- **Die dekodierte Nachricht** als eine einzelne Zeichenkette.

---

## ⚙️ Einschränkungen
- `2² ≤ Nachrichtenlänge ≤ 20²`  

---

## 📌 Beispiel

### Eingabe:
```
CiaondecA
```

### Ausgabe:
```
CodinGame
```
