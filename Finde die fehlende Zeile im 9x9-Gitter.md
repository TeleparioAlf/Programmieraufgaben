# 🧩 Finde die fehlende Zeile im 9x9-Gitter

Gegeben ist ein **9x9 Gitter** von Ziffern mit genau **einer fehlenden Zeile**.  
Jede Zeile und jede Spalte des Gitters muss **jede Ziffer von 1 bis 9 genau einmal** enthalten – keine Ziffer darf innerhalb einer Zeile oder Spalte doppelt vorkommen.

## 📥 Eingabe

- 9 Zeilen werden angegeben.  
- 8 dieser Zeilen enthalten Permutationen der Ziffern 1 bis 9.  
- **Eine Zeile ist durch `?????????` markiert.**

## 📤 Ausgabe

- 1 Zeile: die fehlende 9-stellige Reihe.

## ⚖️ Bedingungen

- Jede Zeile enthält genau 9 Zeichen.  
- Exakt eine Zeile ist `?????????`.  
- Die übrigen Zeilen sind Permutationen der Zahlen von 1 bis 9.

## ✨ Beispiel

**Eingabe**  
```

678912345
234567891
?????????
345678912
123456789
456789123
567891234
789123456
891234567

```

**Ausgabe**  
```

912345678

```
