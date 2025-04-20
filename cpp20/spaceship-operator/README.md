# `<=>` mit komplexeren Strukturen – Beispiel: `Person` (C++20)

**Thema:** Vergleich mehrerer Felder in zusammengesetzten Datenmodellen

## ❌ Ohne `<=>`

- Für Klassen mit mehreren Attributen müssen `==`, `<`, `>` usw. **vollständig manuell implementiert werden**.
- Fehleranfällig bei Änderungen der Reihenfolge, Logik oder Anzahl der Felder.
- Doppelte Logik für Gleichheit und Ordnung – oft nicht konsistent.

## ✅ Mit `<=>`

- Ein einziger Ausdruck `operator<=> = default;` reicht.
- Der Compiler vergleicht automatisch alle Datenfelder in deklarierter Reihenfolge.
- Gleichheit und Ordnungsrelationen bleiben **synchron**.
- Ideal bei domänengetriebenen Datenmodellen wie `Person`, `Adresse`, `Produkt`, etc.

## 🔹 Use-Cases

- Komplexe Objekte vergleichen oder sortieren (`std::sort`, `std::map`)
- Automatisierte Gleichheitsprüfung bei Tests oder Serialisierung
- Einheitliche Vergleichslogik in datengetriebenen Architekturen

## 📌 Fazit

Gerade bei realitätsnahen Objekten mit vielen Feldern spart der Spaceship Operator massiv Entwicklungszeit und reduziert Fehler – ohne Einschränkung der Funktionalität.
