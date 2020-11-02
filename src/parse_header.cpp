#include <iostream>
#include <fstream>
#include <string>

#include "parse_header.hpp"


int parse_header_file(char *filename) {
  std::string line;
  std::ifstream header_file (filename);
  if (header_file.is_open()) {
    while (std::getline(header_file, line)) {
      std::cout << line << std::endl;
    }
    header_file.close();
  } else {
    return 1;
  }
  return 0;
}
