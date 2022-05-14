// Created by Macbook on 17.04.2022.

#include <fstream>
#include <sstream>
#include "jStorage.hpp"

json JsonStorage::get_storage() const {
  return _storage;
}

void JsonStorage::load(){
  try {
    std::ifstream f(_filename);
    f >> _storage;
  } catch (const std::exception& exception){
    std::cout << exception.what() << std::endl;
  }
}
