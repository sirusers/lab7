
#ifndef TEMPLATE_JSTORAGE_HPP
#define TEMPLATE_JSTORAGE_HPP

#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class JsonStorage{
 public:
  explicit JsonStorage(const std::string filename) : _filename(filename) {}
  [[nodiscard]]json get_storage() const;
  void load();

 private:
  json _storage;
  std::string _filename;
};

#endif  // TEMPLATE_JSTORAGE_HPP
