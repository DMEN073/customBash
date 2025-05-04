#include "util.h"
#include <cstdlib>

std::filesystem::path getHomeDirectory() {
  const char* prefixPath = std::getenv("HOME");

  // for windows env variable is USERPROFILE
  // const char* prefixPath = std::getenv("USERPROFILE");

  return prefixPath ? prefixPath : nullptr;
}

std::string getUser() {
  return std::getenv("USER");
}
