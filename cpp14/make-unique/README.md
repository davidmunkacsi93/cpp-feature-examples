# `std::make_unique` (C++14)

**Thema:** Sichere und bequeme Erstellung von `std::unique_ptr`

## ❌ Ohne `make_unique`

- Objekt muss manuell mit `new` erzeugt und an `unique_ptr` übergeben werden.
- Fehleranfällig, insbesondere bei Ausdrücken mit mehreren Parametern oder komplexer Initialisierung.

## ✅ Mit `std::make_unique`

- Erstellt ein Objekt und verpackt es direkt in ein `unique_ptr`.
- Reduziert Code und verhindert doppelte Ressourcenzuweisung.
- Seit C++14 verfügbar und Standardmethode zur Erstellung von `unique_ptr`.

## 📌 Fazit

`std::make_unique` ist die empfohlene Methode zur sicheren Ressourcenverwaltung mit `unique_ptr`.  
Es vermeidet manuelle `new`-Aufrufe und vereinfacht die Konstruktion – kurz, sicher, modern.
