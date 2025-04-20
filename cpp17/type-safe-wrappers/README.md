# Typsichere Container: `std::optional`, `std::variant`, `std::any` (C++17)

**Thema:** Flexible und sichere Handhabung optionaler oder dynamisch typisierter Werte

## ❌ Ohne diese Features

- Optionalität muss durch zusätzliche Flags (`bool hasValue`) oder Rohzeiger modelliert werden.
- Unterschiedliche Typen erfordern manuelle Abfragen und Umwandlungen.
- Führt zu fehleranfälligem Code, schlechter Lesbarkeit und schwer wartbarem Verhalten.

---

## ✅ Mit `std::optional`

- Repräsentiert einen optional vorhandenen Wert.
- Kein zusätzlicher Kontroll-Flag notwendig.
- Sicherer Zugriff über `has_value()` und `value()` oder `value_or()`.

**🔹 Use-Cases:**

- Rückgabe aus einer Funktion, die _möglicherweise_ keinen Wert liefert (z. B. Suche)
- Optionale Felder in Datenstrukturen (z. B. Metadaten, Eingabeparameter)
- Zustand „nicht gesetzt“ klar modellieren ohne magische Werte

---

## ✅ Mit `std::variant`

- Typensicherer Container für genau einen von mehreren möglichen Typen.
- Zugriff über `std::get<>` oder `std::visit`.
- Kein `void*`, kein manuelles Casten erforderlich.

**🔹 Use-Cases:**

- Ergebnis-Typen mit mehreren möglichen Varianten (z. B. `Success` vs. `Error`)
- Zustandsmaschinen mit diskreten Zuständen (z. B. `Loading`, `Ready`, `Failed`)
- Datenfelder mit wechselnden Typen (z. B. `int`, `std::string`, `std::monostate`)

---

## ✅ Mit `std::any`

- Kann beliebigen Wert speichern.
- Kein statischer Typ – Typprüfung und -zugriff nur zur Laufzeit (`typeid`, `any_cast`).
- Extrem flexibel, aber weniger sicher und schwieriger zu kontrollieren.

**🔹 Use-Cases:**

- Plugins, Skript- oder Konfigurationssysteme mit heterogenen Werten
- Container mit beliebigen Typen (z. B. `std::vector<std::any>`)
- Logging-, Event- oder Messaging-Systeme mit lose gekoppeltem Typmodell

---

## 📌 Fazit

Mit `optional`, `variant` und `any` bietet C++17 elegante Werkzeuge für typsichere Datenmodelle, optionale Werte und dynamische Inhalte – und ersetzt damit unsichere Workarounds wie `void*`, Flag-Variablen oder `union`.  
Die Typklarheit wird erhöht, Fehler zur Laufzeit werden reduziert, und der Code wird lesbarer und wartbarer.
