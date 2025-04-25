# 🌊 Digitale Flüsse

Ein **digitaler Fluss** ist eine Zahlenfolge, bei der jede Zahl von der Summe ihrer Ziffern ergänzt wird.  
Die nächste Zahl im Fluss ergibt sich also durch:

> **nächste Zahl = aktuelle Zahl + Quersumme**

📌 **Beispiel:**  
Die Zahl `123` hat die Quersumme `1 + 2 + 3 = 6`, also folgt `129`.  
`129` hat die Quersumme `1 + 2 + 9 = 12`, also folgt `141`.  
So entsteht der digitale Fluss:  
`123 → 129 → 141 → ...`

## 🏞️ Flüsse benennen
Ein digitaler Fluss, der mit einer bestimmten Zahl **K** beginnt, heißt **Fluss K**.

**Beispiele:**

- Fluss `7`:  
  `{7, 14, 19, 29, 40, 44, 52, ...}`  
- Fluss `471`:  
  `{471, 483, 498, 519, ...}`

## 🌉 Flüsse treffen sich
Zwei digitale Flüsse **treffen sich**, wenn sie einen gemeinsamen Wert enthalten.

**Beispiele:**

- Fluss `32` trifft Fluss `47` bei `47`
- Fluss `471` trifft Fluss `480` bei `519`

## 🔢 Eingabe

- **Zeile 1:** Der erste Fluss `r1` *(Startwert des ersten digitalen Flusses)*
- **Zeile 2:** Der zweite Fluss `r2` *(Startwert des zweiten digitalen Flusses)*

🔒 **Einschränkungen:**
- `0 < r1 ≤ 20.000.000`
- `0 < r2 ≤ 20.000.000`

## 🧾 Ausgabe

- **Zeile 1:** Die erste Zahl, bei der sich die beiden Flüsse treffen.

## 📥 Beispiel

**Eingabe:**
```
471
480
```

**Ausgabe:**
```
519
```
