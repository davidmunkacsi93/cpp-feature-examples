#include <iostream>
#include <vector>
#include <ranges>

int main()
{
  std::vector<std::vector<int>> matrix = {
      {1, 2},
      {3, 4},
      {5, 6}};

  // Flattening der Matrix mit views::join
  for (int val : matrix | std::views::join)
  {
    std::cout << val << " ";
  }
  std::cout << "\n";

  return 0;
}