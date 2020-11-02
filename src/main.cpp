// Maintainer: Aidan Handa

#include <iostream>
#include "parse_header.hpp"


int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "A path to a resume header file (.rzh) must be supplied!" << std::endl;
    return 1;
  }

  std::cout << "Parsing: " << argv[1] << std::endl;
  parse_header_file(argv[1]);

  return 0;
}
