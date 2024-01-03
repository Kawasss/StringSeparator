#pragma once
#include <vector>
#include <string> // std::string can also be declared forward

inline extern std::vector<std::string> SeparateStringByChar(const std::string& input, char separator);
inline extern std::vector<std::string> SeparateStringByString(const std::string& input, const std::string& separator);