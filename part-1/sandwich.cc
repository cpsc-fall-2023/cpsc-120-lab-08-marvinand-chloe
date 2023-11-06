// Marvin Fierro
// Marvinfierro@csu.fullerton.edu
// @MarvinF12
// Partners: @cchung323

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "error: you must supply three arguments" << std::endl;
    return 1;
  }

  std::vector<std::string> arguments(argv, argv + argc);

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;
  return 0;
}
