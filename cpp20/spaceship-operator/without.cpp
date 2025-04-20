#include <iostream>
#include <string>

class Person
{
public:
  std::string name;
  int age;
  double height;

  // Gleichheitsvergleich (manuell)
  bool operator==(const Person &other) const
  {
    return name == other.name && age == other.age && height == other.height;
  }

  // Kleiner-Vergleich (manuell)
  bool operator<(const Person &other) const
  {
    if (name != other.name)
      return name < other.name;
    if (age != other.age)
      return age < other.age;
    return height < other.height;
  }
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