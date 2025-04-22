#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int>> matrix = {
      {1, 2},
      {3, 4},
      {5, 6}};

  // Manuelles Flattening der Matrix
  for (const auto &row : matrix)
  {
    for (int val : row)
    {
      std::cout << val << " ";
    }
  }
  std::cout << "\n";

  return 0;
}