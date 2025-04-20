#include <iostream>
#include <vector>
#include <string>

class MyData
{
public:
  std::vector<std::string> items;

  MyData(std::vector<std::string> data) : items(std::move(data))
  {
    // Übernimmt Ressourcen effizient durch Move-Semantik.
    std::cout << "Move constructor called.\n";
  }
};

int main()
{
  // Erzeuge einen temporären Vektor mit Daten.
  std::vector<std::string> rawData = {"a", "b", "c"};

  // Erzeuge ein MyData-Objekt unter Verwendung von std::move.
  MyData d(std::move(rawData));

  // rawData ist nun leer; die Daten wurden verschoben.
  std::cout << "rawData size after move: " << rawData.size() << "\n";

  return 0;
}