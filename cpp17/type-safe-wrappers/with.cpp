#include <iostream>
#include <string>
#include <optional>
#include <variant>
#include <any>

struct User
{
  std::string name;
  std::optional<int> age;
};

int main()
{
  User u;
  u.name = "Anna";
  u.age = std::nullopt; // Kein Alter vorhanden

  if (u.age.has_value())
  {
    std::cout << u.name << " ist " << u.age.value() << " Jahre alt.\n";
  }
  else
  {
    std::cout << u.name << " hat kein Alter angegeben.\n";
  }

  // Beispiel für variant: Zahl oder Text speichern
  std::variant<int, std::string> v = 42;
  v = "Antwort";

  std::visit([](auto &&value)
             { std::cout << "Variant enthält: " << value << "\n"; }, v);

  // Beispiel für any: völlig beliebiger Typ, ohne Typsicherheit beim Zugriff
  std::any a = std::string("Hallo Welt");

  if (a.type() == typeid(std::string))
  {
    std::cout << "Any enthält: " << std::any_cast<std::string>(a) << "\n";
  }

  return 0;
}