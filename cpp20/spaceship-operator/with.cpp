#include <iostream>
#include <string>
#include <compare>

class Person
{
public:
  std::string name;
  int age;
  double height;

  // Automatisch alle Vergleichsoperatoren generieren
  auto operator<=>(const Person &) const = default;
};

int main()
{
  Person a{"Anna", 30, 1.72};
  Person b{"Ben", 30, 1.72};

  if (a < b)
  {
    std::cout << a.name << " kommt vor " << b.name << "\n";
  }

  if (a == b)
  {
    std::cout << "Beide Personen sind gleich.\n";
  }

  return 0;
}