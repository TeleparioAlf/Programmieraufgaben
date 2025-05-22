# 🚔 036 Verbrecherjagd – Gesuchte Zeichen zählen (~ 5 Min.)

## 🎯 Ziel
Du erhältst eine Liste von Zeichen, die für ihre schrecklichen Verbrechen gesucht werden.  
Deine Aufgabe ist es, herauszufinden, **wie oft die gesuchten Zeichen in einer Menge gegebener Zeichenketten vorkommen**.

## 📥 Eingabe
- **Zeile 1:** Eine Zeichenkette `W`, die eine Menge von **gesuchten Zeichen** enthält.
- **Zeile 2:** Eine ganze Zahl `N`, die die Anzahl der zu durchsuchenden Zeichenketten angibt.
- **Die nächsten `N` Zeilen:**  
  - Jeweils eine Zeichenkette `area`, die auf gesuchte Zeichen untersucht wird.

## 📤 Ausgabe
- **`N` Zeilen:**  
  - Für jede Zeichenkette `area` wird die **Anzahl der Vorkommen** eines der gesuchten Zeichen aus `W` ausgegeben.

## ⚙️ Einschränkungen
- `0 < N < 100`
- `W` und `area` enthalten **mindestens 1 Zeichen**.

## 📌 Beispiel

### 📝 Eingabe:
```
@#%
3
@
T@#n
Cr###m! M@st@#m@nd
```

### ✅ Ausgabe:
```
1
2
7
```
