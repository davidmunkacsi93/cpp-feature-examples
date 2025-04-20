#include <iostream>
#include <vector>
#include <string>

class MyData
{
public:
  std::vector<std::string> items;

  MyData(const std::vector<std::string> &data) : items(data)
  {
    // Kopiert die Daten – ineffizient bei großen Datenmengen.
    std::cout << "Copy constructor called.\n";
  }
};

int main()
{
  // Erzeuge einen Vektor mit Daten.
  std::vector<std::string> rawData = {"a", "b", "c"};

  // Erzeuge ein MyData-Objekt durch Kopieren.
  MyData d(rawData);

  // rawData ist unverändert; Kopie wurde erstellt.
  std::cout << "rawData size after copy: " << rawData.size() << "\n";

  return 0;
}