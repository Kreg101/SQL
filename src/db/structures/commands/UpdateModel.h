#pragma once
#include <vector>
#include <string>
#include "BaseModels.h"

struct UpdateModel: public WhereCondition {
  bool update_all = false;
  std::string table_name;
  std::vector<Operand> update_values;
};

