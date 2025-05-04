#include "parser.h"

Action praseInput(const std::string& userInput) {
  auto command = commandMap.find(userInput);
  if (command == commandMap.end()) {
    return Action::NONE;
  }
  return command->second();
}