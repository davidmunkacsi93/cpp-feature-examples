#include <iostream>
#include <dirent.h>   // POSIX
#include <cstring>    // Für strcmp
#include <sys/stat.h> // Für stat()
#include <unistd.h>   // Für getcwd()

int main()
{
  // Ermittle das aktuelle Verzeichnis.
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) == nullptr)
  {
    std::cerr << "Fehler beim Ermitteln des aktuellen Verzeichnisses.\n";
    return 1;
  }

  // Öffne das Verzeichnis manuell.
  DIR *dir = opendir(cwd);
  if (!dir)
  {
    std::cerr << "Konnte Verzeichnis nicht öffnen.\n";
    return 1;
  }

  std::cout << "Dateien im Verzeichnis:\n";

  struct dirent *entry;
  while ((entry = readdir(dir)) != nullptr)
  {
    if (entry->d_type == DT_REG)
    { // Nur reguläre Dateien
      std::cout << "- " << entry->d_name << "\n";
    }
  }

  closedir(dir);
  return 0;
}