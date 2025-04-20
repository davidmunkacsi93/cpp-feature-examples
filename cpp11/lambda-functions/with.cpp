#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> values = {1, 2, 3, 4, 5};

  // Verwende eine Lambda-Funktion inline zum Ausgeben der Werte.
  std::for_each(values.begin(), values.end(), [](int value)
                { std::cout << value << "\n"; });

  return 0;
}