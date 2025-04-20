# Lambda-Funktionen (C++11)

**Thema:** Anonyme Inline-Funktionen zur Verbesserung von Lesbarkeit und Modularität

## ❌ Ohne Lambda-Funktion

- Funktionslogik muss in eine separate Funktor- oder Funktionsklasse ausgelagert werden.
- Führt zu mehr Boilerplate-Code und geringerer Lesbarkeit.
- Der Kontext der Logik ist nicht direkt im Aufruf sichtbar.

## ✅ Mit Lambda-Funktion

- Ermöglicht Inline-Definition kleiner Funktionen direkt im Aufrufkontext.
- Macht Code kürzer, fokussierter und besser wartbar.
- Unterstützt Zugriff auf Variablen aus dem umgebenden Gültigkeitsbereich (per Capture).

## 📌 Fazit

Lambda-Funktionen vereinfachen Funktionsübergaben erheblich und machen den Code präziser – insbesondere bei STL-Algorithmen wie `for_each`, `sort`, `find_if` usw.
