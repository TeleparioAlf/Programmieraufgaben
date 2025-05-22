# 023 Längster wiederkehrender Substring (Case-Insensitive) 🔄

## Ziel 🎯
Finde den längsten wiederkehrenden Substring im Eingabetext (Groß-/Kleinschreibung ignorieren) und gib ihn in Kleinbuchstaben zurück.

Ein wiederkehrender Substring darf sich mit anderen Vorkommen überlappen.

Beispiel:
```
abbabba => abba
```

## Eingabe 📥
- **Line 1:** Ein String `text`

## Ausgabe 📤
- Die kleingeschriebene Version des längsten wiederkehrenden Substrings in `text`
- Falls keine wiederkehrenden Substrings existieren, gib `None` zurück.

## Einschränkungen 🚫
- `1 < length of text < 1024`

## Beispiel 📚

| Eingabe | Ausgabe |
|---------|---------|
| The substring "string" exists twice | string |
