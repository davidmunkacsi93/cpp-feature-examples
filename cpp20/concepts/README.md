# `concepts` (C++20)

**Thema:** Typsicherheit und aussagekräftige Einschränkungen bei Templates

## ❌ Ohne `concepts`

- Templates akzeptieren beliebige Typen – Fehler treten erst spät und oft kryptisch auf.
- Ungültige Aufrufe führen zu schwer nachvollziehbaren Compilerfehlern (SFINAE).
- Keine formale Dokumentation der Anforderungen an Template-Parameter.

## ✅ Mit `concepts`

- Klar definierte Anforderungen an Typen in Templates.
- Bessere Lesbarkeit, explizite Einschränkungen und präzisere Fehlermeldungen.
- Konzepte können wiederverwendet und kombiniert werden.
- Direkt integrierbar in Funktionsparameter (`Sized auto&`) oder klassische Templates (`template<typename T> requires Concept`).

## 🔹 Use-Cases

- Generische Algorithmen (`Sortable`, `Addable`, `Iterable`, …)
- Schnittstellen für STL-artige Strukturen
- Absicherung komplexer Template-Bibliotheken (z. B. Parser, Container, Math)

## 📌 Fazit

Mit `concepts` lassen sich Templates endlich so schreiben, wie man es sich immer gewünscht hat: klar, sicher und verständlich.  
Sie bringen echte Typsicherheit in die generische Programmierung – ohne aufwendige Tricks.
