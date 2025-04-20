# `std::filesystem` (C++17)

**Thema:** Plattformübergreifende Dateisystem-API zur Arbeit mit Pfaden, Dateien und Verzeichnissen

## ❌ Ohne `std::filesystem`

- Zugriff auf das Dateisystem erfordert plattformspezifische Funktionen (z. B. `dirent.h`, `stat`, `getcwd`).
- Code ist nicht portabel zwischen Unix, Windows, etc.
- Manuelle Behandlung von Pfaden, Dateitypen und Zeichencodierungen notwendig.
- Fehleranfällig und aufwendig zu lesen.

## ✅ Mit `std::filesystem`

- Bietet eine standardisierte, plattformunabhängige API.
- Funktionen wie `exists`, `is_regular_file`, `current_path`, `directory_iterator` vereinfachen viele Aufgaben.
- Verbessert Lesbarkeit und reduziert Boilerplate.
- Unterstützt UTF-8 und korrekte Pfadbehandlung über alle Plattformen hinweg.

## 📌 Fazit

`std::filesystem` macht Datei- und Verzeichnisoperationen in C++ einfacher, sicherer und portabler – ein großer Fortschritt gegenüber systemnaher POSIX-Programmierung.
