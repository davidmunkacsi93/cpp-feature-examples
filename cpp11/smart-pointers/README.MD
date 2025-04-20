# Smart Pointers (C++11)

**Thema:** Automatisierte Speicherverwaltung mit `std::unique_ptr`

## 🛠 Mit `std::unique_ptr`

- Verwendet RAII (Resource Acquisition Is Initialization)
- Speicher wird automatisch freigegeben, wenn der Pointer den Gültigkeitsbereich verlässt
- Keine Notwendigkeit für `delete`
- Keine Gefahr von Speicherlecks oder doppeltem Löschen

## ❌ Ohne Smart Pointer

- Manuelle Verwaltung mit `new` und `delete`
- Fehleranfällig: Lecks, vergessene Freigabe, doppelte Freigabe
- Mehr Boilerplate-Code, weniger robust

## 📌 Fazit

Smart Pointer wie `std::unique_ptr` machen C++-Code sicherer, klarer und weniger fehleranfällig – besonders bei komplexeren Ressourcen oder frühzeitigem Return.
