# 🚗 031 Spurwechsel prüfen (~ 8 Min.)

## 🎯 Ziel

Ein Auto fährt auf der **linken Spur** und möchte auf die **rechte Spur** wechseln.
Der Spurwechsel ist **unsicher**, wenn **eine** der folgenden Situationen zutrifft:

1. 🚗 **Rechts direkt daneben** ist ein Auto mit **derselben Geschwindigkeit**
2. 🚙 **Rechts vorne** ist ein Auto, das **langsamer** ist
3. 🚘 **Rechts hinten** ist ein Auto, das **schneller** ist

## 🔡 Eingabe

Die Eingabe besteht aus **drei Zeilen**. Jede Zeile hat **zwei Zeichen**:

* Das **erste Zeichen** ist die **linke Spur**
* Das **zweite Zeichen** ist die **rechte Spur**
* Dein eigenes Auto steht **in der mittleren Zeile, linke Spur**

Jedes Zeichen bedeutet:

* `|` → kein Auto
* Ziffer `1` bis `9` → ein Auto mit dieser Geschwindigkeit

Der Verkehr fährt **von unten nach oben**, d.h. die Autos oben sind weiter vorne.

### 🧾 Beispiel-Eingabe:

```
|3
2|
|1
```

## 📤 Ausgabe

Gib `true` aus, wenn der Spurwechsel **sicher** ist.
Gib `false` aus, wenn der Spurwechsel **unsicher** ist.

## 📌 Beispiel

### Eingabe:

```
||
1|
||
```

### Ausgabe:

```
true ✅
```
