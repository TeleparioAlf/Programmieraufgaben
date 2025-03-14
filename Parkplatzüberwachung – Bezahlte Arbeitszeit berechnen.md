# 🚗 Parkplatzüberwachung – Bezahlte Arbeitszeit berechnen

## 🎯 Ziel
In einem Parkplatz kommen und gehen Autos zu verschiedenen Zeiten.  
Ein **Wächter** ist für den Parkplatz zuständig, wird aber **nur bezahlt, wenn mindestens ein Auto** auf dem Parkplatz ist.  
Du möchtest ihm eine **Schätzung seines Tageslohns** geben.

Mit den **Ankunfts- und Abfahrtszeiten** der Autos musst du berechnen, **wie viele Stunden** der Parkplatz **mindestens ein Auto** enthält.

**Hinweis:**  
Der Parkplatz ist nach der **24. Stunde immer leer**.

## 📥 Eingabe
- **Zeile 1:** Eine ganze Zahl `N`, die die Anzahl der Autos angibt.
- **Die nächsten `N` Zeilen:**  
  - Jeweils zwei ganze Zahlen `start` und `end`, die die **Ankunfts-** (`start`, inklusiv)  
    und **Abfahrtszeit** (`end`, exklusiv) eines Autos angeben.

## 📤 Ausgabe
- **Eine einzelne Zahl**, die angibt, wie viele Stunden **mindestens ein Auto** auf dem Parkplatz war.

## ⚙️ Einschränkungen
- `0 < N ≤ 50`
- `0 ≤ start < end ≤ 24`

## 📌 Beispiel

### Eingabe:
```
3
2 5
8 13
14 20
```

### Ausgabe:
```
14
```
