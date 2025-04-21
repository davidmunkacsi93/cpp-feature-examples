#include <iostream>
#include <string>
#include <optional>

// Funktion gibt optionalen Wert zurück, aber kein Fehlerdetail.
std::optional<int> parse_number(const std::string &input)
{
  try
  {
    return std::stoi(input);
  }
  catch (...)
  {
    return std::nullopt; // Fehler wird nicht weiter spezifiziert.
  }
}

int main()
{
  std::string text = "abc";
  auto result = parse_number(text);

  if (result.has_value())
  {
    std::cout << "Zahl: " << result.value() << "\n";
  }
  else
  {
    std::cout << "Fehler beim Parsen.\n"; // Kein Hinweis, warum.
  }

  return 0;
}