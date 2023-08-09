#pragma once
#include <utility>
#include <vector>
#include <string>
#include "../../structures/DataTypes.h"

struct Row {
  explicit Row(std::vector<possible_data_types>  fields) : fields(std::move(fields)) {}
  Row() = default;

  bool operator==(const Row& rhs) const {
    return fields == rhs.fields;
  }
  bool operator!=(const Row& rhs) const {
    return !(rhs == *this);
  }

  std::vector<possible_data_types> fields;
};

