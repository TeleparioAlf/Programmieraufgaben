# 🧦 037 Verschwundene Socken beim Waschen finden

## 🎯 Ziel
Manchmal verschwinden Socken in der Waschmaschine!  

Nun stehst du vor deiner Waschmaschine und hast sie geleert. Während du die Wäsche sortierst, möchtest du wissen,  
**ob Socken verloren gegangen sind und welche es sind**.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Kleidungsstücke und Unterwäsche in der Waschmaschine angibt.
- **Die nächsten `N` Zeilen:**  
  - **Ein Kleidungsstück**, bestehend aus:
    - `clothes type`: z. B. `sock`, `pant`, `t-shirt`, etc.
    - `clothes size`: eine ganze Zahl.
    - `clothes color`: eine Zeichenkette.

### 🧦 Regeln für Socken:
- Socken haben den **Kleidungs-Typ** `"sock"`.
- Zwei Socken bilden ein **Paar**, wenn sie:
  - den gleichen **Typ (`sock`)**,
  - die gleiche **Größe**,
  - und die gleiche **Farbe** haben.
- Falls eine Socke **keinen passenden Partner** hat, gilt sie als **verloren**.

## 📤 Ausgabe
- **Zeile 1:** Die **Anzahl** der verschwundenen Socken.
- **Zeile 2:** Die **Größe und Farbe** jeder verschwundenen Socke, sortiert nach:
  1. **Größe (numerisch)**
  2. **Farbe (alphabetisch)**  

  Falls **keine Socken fehlen**, bleibt die Ausgabe leer.

## ⚙️ Einschränkungen
- `0 ≤ N ≤ 10`

## 📌 Beispiel

### Eingabe:
```
5
t-shirt 2 blue
sock 42 red
sock 42 red
short 7 white
sock 37 grey
```

### Ausgabe:
```
1
37 grey
```
