#include <iostream>
#include <string>
#include <expected> // Seit C++23

// Funktion liefert entweder Wert oder Fehlertext.
std::expected<int, std::string> parse_number(const std::string &input)
{
  try
  {
    return std::stoi(input);
  }
  catch (...)
  {
    return std::unexpected("Ungültiges Zahlenformat");
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
    std::cout << "Fehler: " << result.error() << "\n";
  }

  return 0;
}