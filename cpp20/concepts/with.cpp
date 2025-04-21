#include <iostream>
#include <vector>
#include <string>
#include <concepts>

// Definiere ein Konzept: Container mit size()-Methode
template <typename T>
concept Sized = requires(T t) {
  { t.size() } -> std::convertible_to<std::size_t>;
};

// Eingeschränkte Funktion: nur für Typen, die dem Konzept Sized entsprechen
void print_size(const Sized auto &container)
{
  std::cout << "Größe: " << container.size() << "\n";
}

int main()
{
  std::vector<int> vec = {1, 2, 3};
  print_size(vec); // OK

  int x = 42;
  print_size(x); // Compilerfehler: Typ erfüllt Konzept nicht – klare Fehlermeldung

  return 0;
}