#pragma once
#ifndef INCLUDE_CONSTANTACTION_H_
#define INCLUDE_CONSTANTACTION_H_

#include <functional>
#include <unordered_map>
#include <string>

enum class Action {
  NONE = -1,
  EXIT = 0,
  HELP = 1
};

inline const std::unordered_map<std::string, std::function<Action()>> commandMap
    = {{"exit",
        []() {
          return Action::EXIT;
        }},
       {"help", []() {
          return Action::HELP;
        }}};

#endif  // INCLUDE_CONSTANTACTION_H_
