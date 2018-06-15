#include <iostream>
#include "TutorialConfig.h"
#ifdef USE_CONVERTER
#include "Converter.h"
#endif

int main() {
#ifdef USE_CONVERTER
  Converter converter;
  printf("Hello From %s\n", converter.convert().c_str());
#else
  printf("Hello From %s\n", "Default Main");
#endif

  printf("Version %d.%d\n", Tutorial_VERSION_MAJOR, Tutorial_VERSION_MINOR);
  return 0;
}