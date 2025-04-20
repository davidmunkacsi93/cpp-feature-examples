#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Ohne generische Lambdas muss der Parametertyp explizit angegeben werden.
int main()
{
  std::vector<int> numbers = {1, 2, 3};
  std::vector<std::string> words = {"one", "two", "three"};

  // Lambda für int
  std::for_each(numbers.begin(), numbers.end(), [](int x)
                { std::cout << "Zahl: " << x << "\n"; });

  // Lambda für std::string
  std::for_each(words.begin(), words.end(), [](const std::string &s)
                { std::cout << "Wort: " << s << "\n"; });

  return 0;
}