# 🤖 Roboter-Tour auf einer 2D-Karte 🗺️

**🎯 Ziel**  
Bestimme, auf welchem Feld der Roboter am häufigsten landet (der Startpunkt zählt als Besuch).

## 📥 Eingabe  
- Eine Zeichenkette `route`, bestehend aus den Befehlen:
  - `^` ⬆️ — nach Norden
  - `>` ➡️ — nach Osten  
  - `v` ⬇️ — nach Süden  
  - `<` ⬅️ — nach Westen  

## 📤 Ausgabe  
- Eine einzelne ganze Zahl: die maximale Besuchshäufigkeit eines Feldes.

## ⚙️ Nebenbedingungen  
- 0 ≤ Länge von `route` ≤ 500

## 💡 Beispiel

| Eingabe  | Ausgabe |
|----------|--------:|
| `^><`    |       2 |

**Erklärung**  
1. Start bei (0, 0) → Besuchszähler für dieses Feld = 1  
2. `^` → (0, 1) → Zähler dort = 1  
3. `>` → (1, 1) → Zähler dort = 1  
4. `<` → (0, 1) → Zähler dort = 2 ← **maximale Häufigkeit**  

```text
Besuchsverteilung:
  (0,0): 1
  (0,1): 2  ← häufigstes Feld
  (1,1): 1
