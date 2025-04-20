#include <iostream>
#include <memory>

class MyClass
{
public:
  MyClass(int x)
  {
    std::cout << "MyClass constructed with " << x << ".\n";
  }
};

int main()
{
  // Erzeuge ein unique_ptr mit std::make_unique – sicherer und kürzer.
  std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>(42);

  return 0;
}