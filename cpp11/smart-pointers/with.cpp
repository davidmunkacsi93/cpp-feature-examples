#include <iostream>
#include <memory>

class MyClass
{
public:
  void greet() const
  {
    std::cout << "Hello from MyClass\n";
  }
};

int main()
{
  std::unique_ptr<MyClass> obj(new MyClass());
  obj->greet();

  // Speicherfreigabe erfolgt automatisch beim Verlassen des Gültigkeitsbereichs.
  return 0;
}