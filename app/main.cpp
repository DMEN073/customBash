#include <iostream>
#include "parser.h"
#include "util.h"
/*main loop should check for user enter input and parse the char inside of the char buffer and
 * execute different function based on it*/
bool isRunning = true;
std::string input;

int main() {
  std::cout << "Hello " << getUser() << '!' << std::endl;

  while (isRunning) {
    auto homeDir = getHomeDirectory();
    auto path = std::filesystem::current_path();
    path = path.lexically_relative(homeDir);
    std::cout << path.c_str() << "> ";
    std::getline(std::cin, input);
    auto actionCommand = praseInput(input);
    /*this should be a function that takes in the action and execute based on it but it should not
     * just be an execute and should have a seperate process here for parsing and execute*/
    if (actionCommand == Action::EXIT) {
      isRunning = false;
    } else if (actionCommand == Action::HELP) {
      std::cout << "No Help currently\n";
    } else if (actionCommand == Action::NONE) {
      // do nothing
    }
  }

  return 0;
}
