#include <iostream>
#include <vector>
#include <string>

// Funktion arbeitet mit beliebigem Typ – Fehler treten erst bei der Instanziierung auf.
template <typename T>
void print_size(const T &container)
{
  // Erwartet, dass container.size() existiert – sonst Compilerfehler.
  std::cout << "Größe: " << container.size() << "\n";
}

int main()
{
  std::vector<int> vec = {1, 2, 3};
  print_size(vec); // OK

  int x = 42;
  print_size(x); // Führt zu einem unklaren Compilerfehler zur Übersetzungszeit.

  return 0;
}