#include <vector>
#include <string>
#include "./Condition.h"

struct DeleteFromModel: public WhereCondition {
  std::string table_name;
  bool delete_all = false;
};

