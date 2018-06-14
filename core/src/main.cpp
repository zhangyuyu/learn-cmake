#include <iostream>
#include "Converter.h"
#include "TutorialConfig.h"

int main() {
  Converter converter;
  printf("Hello From %s\n", converter.convert().c_str());
  printf("Version %d.%d\n", Tutorial_VERSION_MAJOR, Tutorial_VERSION_MINOR);
  return 0;
}