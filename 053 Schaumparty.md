## 🎉 Schaumparty in meiner Garage

Meine Eltern haben mir tatsächlich erlaubt, eine Schaumparty in der Garage zu feiern.
Bevor es losgeht, muss ich berechnen, wie viel **Schaumvolumen** wirklich zur Verfügung steht.

Die Garage ist ein perfekter Quader. Leider stehen darin zwei Kartons, die ich nicht wegräumen darf. Beide sind ebenfalls quaderförmig, exakt an den Wänden und am Boden ausgerichtet. Einer kann den anderen ganz, teilweise oder gar nicht überlappen.

Ich kenne:

* die **Abmessungen der Garage** (Breite, Länge, Höhe)
* und für jeden Karton die **Koordinaten zweier gegenüberliegender Ecken** (`x1 y1 z1 x2 y2 z2`)

Alle Werte sind **Fließkommazahlen**, die Kartons liegen vollständig innerhalb der Garage.
Kein Schaum kann in die Kartons eindringen.

Deine Aufgabe:
Berechne das **verfügbare Volumen für den Schaum**.

### 🧩 **Eingabe**

```
W L H                // Breite, Länge, Höhe der Garage  
x1 y1 z1 x2 y2 z2    // Koordinaten des ersten Kartons  
x3 y3 z3 x4 y4 z4    // Koordinaten des zweiten Kartons
```

### 🧮 **Ausgabe**

```
Das Volumen, das für den Schaum frei bleibt (Fließkommazahl)
```

### 💡 **Beispiel**

**Eingabe**

```
10 8 3
1 1 0 4 5 2
2 2 0 5 6 3
```

**Ausgabe**

```
192
```
