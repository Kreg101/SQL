#pragma once
#include "Errors.h"
#include <string>
#include <ostream>
#include <variant>

enum DataTypes {
  Int,
  Bool,
  Float,
  Double,
  Varchar
};

static DataTypes DataTypeFromString(std::string& string) {
  std::transform(string.begin(), string.end(), string.begin(),
                 [](unsigned char c){ return std::tolower(c); });

  if (string == "int") {
    return Int;
  } else if (string == "bool") {
    return Bool;
  } else if (string == "float") {
    return Float;
  } else if (string == "double") {
    return Double;
  } else if (string == "varchar") {
    return Varchar;
  }

  throw SQLError(UNKNOWN_DATA_TYPE);
}

struct Nil {
  bool operator==(const Nil& rhs) const {
    return true;
  }
  bool operator!=(const Nil& rhs) const {
    return !(rhs == *this);
  }
  bool operator<(const Nil& rhs) const {
    return true;
  }
  bool operator>(const Nil& rhs) const {
    return rhs < *this;
  }
  bool operator<=(const Nil& rhs) const {
    return !(rhs < *this);
  }
  bool operator>=(const Nil& rhs) const {
    return !(*this < rhs);
  }
  friend std::ostream& operator<<(std::ostream& os, const Nil& null) {
    os << "Null";
    return os;
  }

  friend std::istream &operator>>( std::istream  &input, Nil& null ) {
    std::string a;
    input >> a;
    return input;
  }
};

typedef std::variant<int, float, bool, std::string, double, Nil> possible_data_types;