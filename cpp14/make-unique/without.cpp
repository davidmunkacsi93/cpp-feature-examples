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
  // Erzeuge ein unique_ptr mit direktem new-Aufruf.
  // Dies ist fehleranfällig, da new und unique_ptr manuell verbunden werden müssen.
  // Es ist möglich, dass der Zeiger erstellt wird, aber nicht korrekt dem unique_ptr zugewiesen wird.
  // Dies kann zu Speicherlecks führen, wenn der Zeiger nicht korrekt gelöscht wird.
  std::unique_ptr<MyClass> ptr(new MyClass(42));

  return 0;
}