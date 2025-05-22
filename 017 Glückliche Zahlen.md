# 😊017 Glückliche Zahlen

## 🎯 Ziel
Eine **glückliche Zahl** ist definiert als eine Zahl, bei der die **Summe der Quadrate ihrer Ziffern**, wiederholt berechnet, letztendlich **1** ergibt. Wenn dieser Prozess in einer Schleife endet, die **nicht 1** enthält, wird die Zahl als **unglücklich** bezeichnet.

**Beispiel:**
- Die Zahl `19` ist eine glückliche Zahl:
  - 1² + 9² = 1 + 81 = 82
  - 8² + 2² = 64 + 4 = 68
  - 6² + 8² = 36 + 64 = 100
  - 1² + 0² + 0² = 1 → **glücklich** 😊

## 📝 Aufgabe
Schreibe ein Programm, das überprüft, ob eine gegebene Zahl **glücklich** ist oder nicht.

## 📥 Eingabe
- Eine **ganze Zahl** `n`, die überprüft werden soll.

## 📤 Ausgabe
- Gib `true` aus, wenn die Zahl **glücklich** ist.
- Gib `false` aus, wenn die Zahl **unglücklich** ist.

## 🔄 Beispiel

**Eingabe:**
```
19
```

**Ausgabe:**
```
true
```

**Eingabe:**
```
4
```

**Ausgabe:**
```
false
```

## 💡 Hinweis
- Eine Zahl wird als **unglücklich** betrachtet, wenn der Prozess der Summenbildung der Quadrate der Ziffern in eine **endlose Schleife** gerät, die nicht `1` enthält
 
