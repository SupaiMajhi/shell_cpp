#include <iostream>
#include <string>

int main() {
  while(true) {
    std::string command;
    // Flush after every std::cout / std:cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    std::cout << "$ ";
    std::cin >> command;
    if(command.compare("exit") == 0) {
      break;
    } else {
      std::cout << command << ": command not found\n";
    }
  }
}
