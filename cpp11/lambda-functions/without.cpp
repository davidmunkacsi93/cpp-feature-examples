#include <iostream>
#include <vector>
#include <algorithm>

// Funktor-Klasse zur Verwendung mit std::for_each.
class PrintValue
{
public:
  void operator()(int value) const
  {
    std::cout << value << "\n";
  }
};

int main()
{
  std::vector<int> values = {1, 2, 3, 4, 5};

  // Verwende eine separate Funktor-Klasse, um Werte auszugeben.
  std::for_each(values.begin(), values.end(), PrintValue());

  return 0;
}