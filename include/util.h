#pragma once
#ifndef INCLUDE_UTIL_H_
#define INCLUDE_UTIL_H_

#include <filesystem>

std::filesystem::path getHomeDirectory();
std::string getUser();

#endif  // INCLUDE_UTIL_H_
