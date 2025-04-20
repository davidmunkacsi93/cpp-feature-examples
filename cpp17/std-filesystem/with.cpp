#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
  // Iteriere über alle Einträge im aktuellen Verzeichnis.
  std::cout << "Dateien im Verzeichnis:\n";

  for (const auto &entry : fs::directory_iterator(fs::current_path()))
  {
    if (entry.is_regular_file())
    {
      std::cout << "- " << entry.path().filename() << "\n";
    }
  }

  return 0;
}