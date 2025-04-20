#include <iostream>

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
  MyClass *obj = new MyClass();
  obj->greet();

  // Speicher muss manuell freigegeben werden.
  delete obj;

  return 0;
}