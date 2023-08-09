#include <vector>
#include <string>
#include "Condition.h"
#include "BaseModels.h"
#include "JoinModel.h"

struct SelectFromModel: public WhereCondition{
  bool select_all_columns = false;
  bool join = false;
  std::vector<std::string> columns;
  std::string table_name;
  JoinModel join_model;
};

