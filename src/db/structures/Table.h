#include <string>
#include "Column.h"
#include "Row.h"

struct Table {
  bool operator==(const Table& rhs) const {
    return name == rhs.name &&
        columns == rhs.columns &&
        rows == rhs.rows;
  }
  bool operator!=(const Table& rhs) const {
    return !(rhs == *this);
  }

  std::string name;
  std::vector<Column> columns;
  std::vector<Row> rows;
};
