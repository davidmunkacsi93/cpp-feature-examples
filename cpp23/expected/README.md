# `std::expected` (C++23)

**Thema:** Typsichere Rückgabe von Werten mit expliziter Fehlerbehandlung

## ❌ Ohne `std::expected`

- Fehler werden über `bool`, `optional`, Exceptions oder Sonderwerte modelliert.
- Es fehlt oft die Möglichkeit, **zusätzliche Fehlerinformationen** strukturiert mitzugeben.
- Entscheidung: Exceptions verwenden (kompliziert) oder auf Fehlerdetails verzichten.

## ✅ Mit `std::expected`

- Rückgabe enthält **entweder** einen gültigen Wert **oder** eine Fehlerbeschreibung.
- Kein `throw` notwendig – ideal für Performance-kritische und deterministische Anwendungen.
- `expected<T, E>` ersetzt vielerorts `optional<T>` + Logging/Fehlercodes.

## 🔹 Use-Cases

- Parser, Konverter, Netzwerkfunktionen
- Validierungsschritte mit klarer Fehlerstruktur
- Funktionen mit häufiger Nicht-Erfolgs-Logik (z. B. Authentifizierung, Datenbank-Zugriff)

## 📌 Fazit

`std::expected` macht Fehlerbehandlung explizit, strukturiert und lesbar.  
Es ist der moderne, sichere und effizientere Weg, um „Wert oder Fehler“-Situationen im Code darzustellen.
