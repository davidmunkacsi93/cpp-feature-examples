# Move-Semantik (C++11)

**Thema:** Effiziente Übergabe von Ressourcen durch Verschiebung statt Kopie

## 🚀 Mit Move-Semantik (`std::move`)

- Vermeidet teure Kopien großer Objekte (z. B. Vektoren, Strings).
- Ressourcen werden „verschoben“, nicht kopiert.
- Übergibt temporäre oder nicht mehr benötigte Objekte effizient.
- Besonders vorteilhaft bei Rückgabewerten, Containern und Ressourcen-Handling.

## 🐢 Ohne Move-Semantik

- Übergabe erfolgt per Kopie – alle Daten werden dupliziert.
- Führt bei großen Objekten zu unnötiger Speicher- und Performancebelastung.
- Typisch in C++03 oder bei fehlender Unterstützung für `std::move`.

## 📌 Fazit

Move-Semantik macht moderne C++-Programme performanter und speichereffizienter – mit minimalem Syntaxaufwand.  
Immer dann einsetzen, wenn ein Objekt nicht weiter gebraucht wird und Ressourcen effizient übergeben werden sollen.
