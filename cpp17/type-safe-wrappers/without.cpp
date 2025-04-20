#include <iostream>
#include <string>

// Ohne optionale oder typsichere Wrapper – Verwendung von Rohzeigern oder Flags.
struct User
{
  std::string name;
  bool hasAge;
  int age;
};

int main()
{
  User u;
  u.name = "Anna";
  u.hasAge = false;
  u.age = 0; // Bedeutungslos, wenn hasAge == false

  if (u.hasAge)
  {
    std::cout << u.name << " ist " << u.age << " Jahre alt.\n";
  }
  else
  {
    std::cout << u.name << " hat kein Alter angegeben.\n";
  }

  return 0;
}