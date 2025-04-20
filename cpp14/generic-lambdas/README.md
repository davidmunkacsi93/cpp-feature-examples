# Generische Lambdas (C++14)

**Thema:** Lambda-Funktionen mit automatischer Typableitung der Parameter

## ❌ Ohne generische Lambdas

- Lambda-Parameter müssen explizit typisiert sein.
- Für unterschiedliche Typen (z. B. `int`, `std::string`) sind getrennte Lambdas notwendig.
- Führt zu Code-Duplikation und reduziert Wiederverwendbarkeit.

## ✅ Mit generischen Lambdas

- Lambda-Parameter können mit `auto` deklariert werden.
- Ermöglicht typunabhängige, wiederverwendbare Logik.
- Ideal für Templates, Algorithmen, Utility-Funktionen oder Debug-Ausgaben.

## 🧠 Technischer Hinweis

- Generische Lambdas nutzen **Template-Syntax im Lambda-Parameter** (`auto` statt festem Typ).
- Ab C++14 verfügbar.

## 📌 Fazit

Generische Lambdas machen Funktionen universeller und kompakter – besonders beim Einsatz mit STL-Algorithmen oder typübergreifenden Operationen.
