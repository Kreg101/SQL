#include <vector>
#include <string>
#include "../Row.h"

struct InsertIntoModel {
  std::vector<Row> rows;
  std::string table_name;
};

