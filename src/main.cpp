#include <iostream>
#include <string>

int main() {
  while(true) {
    std::string command;
    std::string input;
    // Flush after every std::cout / std:cerr
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    std::cout << "$ ";
    std::getline(std::cin, input);
    command = input.substr(0, 5);

    if(command.compare("exit") == 0) {
      break;
    }else if(command.compare("echo ") == 0) {
      std::cout << input.substr(5) << "\n";
    }else if(command.compare("type ") == 0) {
      if(input.substr(5).compare("echo") == 0 || input.substr(5).compare("type") == 0 || input.substr(5).compare("exit") == 0) {
        std::cout << input.substr(5) << " is a shell builtin\n";
      }else {
        std::cout << input.substr(5) << ": not found\n";
      }
    }else {
      std::cout << input << ": command not found\n";
    }
  }
}
