# 🔢 Palindrom-Zahl

## 🎯 Ziel  
Schreibe ein Programm, das überprüft, ob eine gegebene ganze Zahl **x** ein **Palindrom** ist.  
Eine Zahl ist ein Palindrom, wenn sie **von vorne und hinten gelesen gleich** ist.

---

## 🧩 Beschreibung  
Ein Palindrom liest sich symmetrisch, z. B. 121 → rückwärts ebenfalls 121.  
Negative Zahlen können **nicht** Palindrome sein, da das Minuszeichen nur vorne steht.  
Zahlen mit einer Endnull (außer 0 selbst) sind ebenfalls **keine** Palindrome – z. B. 10 → rückwärts 01.

---

## 📥 Eingabe  
Eine ganze Zahl `x`  
-2<sup>31</sup> <= x <= 2<sup>31</sup> - 1

## 📤 Ausgabe  
- Gib `true` aus, wenn die Zahl ein Palindrom ist.  
- Gib `false` aus, wenn sie kein Palindrom ist.

---

## 🧮 Beispiele

### Beispiel 1
**Eingabe:**  
```

121

```
**Ausgabe:**  
```

true

```
**Erklärung:**  
121 liest sich von links und rechts gleich → ✅ Palindrom.

---

### Beispiel 2
**Eingabe:**  
```

-121

```
**Ausgabe:**  
```

false

```
**Erklärung:**  
Von links: -121 → von rechts: 121- → ❌ kein Palindrom.

---

### Beispiel 3
**Eingabe:**  
```

10

```
**Ausgabe:**  
```

false

```
**Erklärung:**  
Rückwärts gelesen ergibt sich 01 → ❌ kein Palindrom.

---

## 💭 Zusatzfrage  
Kannst du die Aufgabe **lösen, ohne die Zahl in einen String umzuwandeln**?

---

## 🧠 Tipp  
Versuche, die **zweite Hälfte** der Zahl umzukehren und mit der **ersten Hälfte** zu vergleichen.
