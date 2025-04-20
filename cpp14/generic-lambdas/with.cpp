#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Mit C++14 können Lambdas automatisch typunabhängig formuliert werden.
int main()
{
  std::vector<int> numbers = {1, 2, 3};
  std::vector<std::string> words = {"one", "two", "three"};

  // Generisches Lambda: akzeptiert beliebigen Typ für x.
  auto print = [](auto x)
  {
    std::cout << x << "\n";
  };

  std::for_each(numbers.begin(), numbers.end(), print);
  std::for_each(words.begin(), words.end(), print);

  return 0;
}