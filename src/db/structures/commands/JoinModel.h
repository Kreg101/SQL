#include "../Column.h"
#include "BaseModels.h"
#include "../JoinType.h"

#include <string>

struct JoinModel: public WhereCondition {
  JoinType join_type;
  std::string table_to_join;
  std::vector<std::string> columns_1;
  std::vector<std::string> columns_2;
  std::vector<std::string> all_columns;
};

