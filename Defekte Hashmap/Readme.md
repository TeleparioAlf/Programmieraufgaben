# 🧠 Ziel

Du wurdest gerade bei **HasheeCorp™** eingestellt, einem Unternehmen, das eine eigene Key-Value-Store-Engine entwickelt.  
Aber… es gibt einen Haken. ⚠️

Aufgrund eines **Bugs 🐞** im Hashing-Algorithmus verwendet die Engine **nur den ersten Buchstaben** jedes Schlüssels, um zu bestimmen, wo dieser im Hashmap gespeichert wird.

Das führt dazu, dass mehrere Schlüssel, die mit demselben Buchstaben beginnen, **kollidieren 💥** – und im Falle einer Kollision **überschreibt der neue Schlüssel den vorherigen**.

Deine Aufgabe ist es, **diese defekte Hashmap zu simulieren** und den finalen Zustand auszugeben. 🛠️

## 📥 Eingabe

- **Zeile 1**: Eine Ganzzahl `N` – die Anzahl der Key-Value-Paare.  
- **N weitere Zeilen**: Ein String `key` und eine Ganzzahl `value`, getrennt durch ein Leerzeichen.

## 📤 Ausgabe

Für jeden **Bucket** in der finalen Hashmap gib eine Zeile im folgenden Format aus:

```
first_letter: key=value
```

✅ Sortiere die Ausgabe nach dem `first_letter` in **aufsteigender alphabetischer Reihenfolge**.

## 📏 Einschränkungen

- `1 ≤ N ≤ 1000`  
- `key` besteht nur aus **kleingeschriebenen Buchstaben** und **Zahlen** (keine Leerzeichen)

## 🧪 Beispiel

### Eingabe
```
5
apple 10
ant 12
banana 9
boat 8
zebra 42
```

### Ausgabe
```
a: ant=12
b: boat=8
z: zebra=42
```
