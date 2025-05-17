# 🚗 Spurwechsel-Sicherheitsprüfung

## 🎯 Ziel  
Es gibt ein Auto auf der **linken** Spur, das in die rechte Spur wechseln muss.  
Der Spurwechsel ist **nicht sicher**, wenn eine der folgenden Bedingungen erfüllt ist:

1. 🚗 Es befindet sich ein anderes Auto direkt rechts daneben, das mit der **gleichen Geschwindigkeit** fährt.
2. 🚙 Ein Auto ist **vorne rechts** und fährt **langsamer**.
3. 🚘 Ein Auto ist **hinten rechts** und fährt **schneller**.

## 🔡 Eingabe  
Die Eingabe besteht aus **drei Zeilen** mit **zweistelligen Zeichenketten**, die die Position und Geschwindigkeit der Autos angeben:

- `|` bedeutet, dass kein Auto vorhanden ist.
- Eine **Zahl zwischen 1 und 9** gibt ein Auto mit dieser **Geschwindigkeit** an.
- Der Verkehr **bewegt sich nach oben**:
  - Die **oberste Zeile** zeigt den vordersten Teil des Verkehrs.
  - Die **unterste Zeile** zeigt das hinterste Auto.

### Beispiel  
```
|3
2|
|1
```

## 🔢 Ausgabe  
- **`true`** ✅ → Der Spurwechsel ist sicher.  
- **`false`** ❌ → Der Spurwechsel ist nicht sicher.

## 🔒 Einschränkungen  
- Die Geschwindigkeit eines Autos liegt zwischen **1 ≤ speed ≤ 9**.

## 📌 Beispiel  
### Eingabe  
```
||
1|
||
```
### Ausgabe  
```
true ✅
```
